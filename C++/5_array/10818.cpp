
#include <iostream>
using namespace std;

int main(){
    int num,max,min,first;

    cin>>num;
    cin>>first;

    min=first;
    max=first;

    for(int i=0;i<num;i++){
        cin>>first;
        if(first<min){
            min=first;
        }
        if(first>max){
            max=first;
        }
    }

    cout<<min<<' '<<max;
}