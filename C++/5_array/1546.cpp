#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    vector<double> arr;

    double num, score;
    double sum=0;
    cin>>num;

    for(int i=0;i<num;i++){
        cin>>score;
        arr.push_back(score);
    }

    int divide=*max_element(arr.begin(), arr.end());

    for(int i=0;i<num;i++){
        arr[i]=arr[i]/divide*100;
        sum+=arr[i];
    }

    cout<<(sum/num);
}