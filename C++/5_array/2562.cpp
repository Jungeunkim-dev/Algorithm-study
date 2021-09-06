// 원소 인덱스 번호, (1)번부터 세는지, (0)번부터 세는지 확실히 세기.
// 헷갈리면 주석을 사용하자.
// 변수가 가진 값들 확실하게 파악하자.

#include <iostream>
using namespace std;

int main(){

    int count,first,max;

    count=1;
    cin>>first;
    max=first; // 1번째 원소

    for(int i=2;i<=9;i++){
        cin>>first;
        if(max<first){
            max=first;
            count=i;
        }
    }

    cout<<max<<'\n'<<count;
}

/*#include <iostream>
using namespace std;

int main(){

    int count,first,max;

    count=0;
    cin>>first;
    max=first;

    for(int i=1;i<=9;i++){
        cin>>first;
        if(max<first){
            max=first;
            count=i;
        }
    }

    cout<<max<<'\n'<<count;
}*/