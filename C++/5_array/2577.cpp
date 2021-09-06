#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    int num;
    int count;
    int add;

    int arr[]={0,0,0,0,0,0,0,0,0,0};


    cin>>a>>b>>c;
    count=a*b*c;
    cout<<count;

    for(int i=9;i>=1;i--) {
        if (count / pow(10, i) > 1) {
            num = i;
            break;
        }
    }


    for(int j=num;j>=1;j--){

        add=count/(pow(10,j));
        arr[add]++;
        count=count/(pow(10,j));
    }

    arr[count]++;

    for(int i=0;i<10;i++){
        cout<<arr[i]<<' ';
    }
}