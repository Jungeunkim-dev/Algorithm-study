#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main(){

    //ios:sync_with_stdio(0);
    //cin.tie(0);
    int n,x,num;
    cin>>n>>x;

    for(int i=0; i<n; i++){
        cin>>num;
        if(x>num){
            cout<<num<<' ';
        }
    }
}