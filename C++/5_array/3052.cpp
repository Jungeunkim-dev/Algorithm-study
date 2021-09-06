#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr;

    int num;
    int count=0;
    int answer=0;
    cin>>num;
    arr.push_back(num%42);

    for(int i=2;i<=10;i++){
        count=0;
        cin>>num;
        num=num%42;

        for(const auto&item:arr){
            if(item==num){
                count++;
            }
        }

        if(count==0){
            answer++;
            arr.push_back(num);
        }

    }

    cout<<answer+1;
}