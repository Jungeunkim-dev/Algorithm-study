#include <iostream>
using namespace std;

int main(){
    int x,y,z,num;
    cin>>x>>y>>z;

    if(x>y){
        num=x;
        x=y;
        y=num;
    }

    if(y>z){
        num=y;
        y=z;
        z=num;
    }

    if(x>y){
        num=x;
        x=y;
        y=num;
    }

    cout<<x<<' '<<y<<' '<<z;
}