//
// Created by 김정은 on 2021/09/05.
//

#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    if(x>=90) cout<<'A';
    else if(x>=80) cout<<'B';
    else if(x>=70) cout<<'C';
    else if(x>=60) cout<<'D';
    // ❌ else cout<<'E'; ❌
    else cout<<'F';

}