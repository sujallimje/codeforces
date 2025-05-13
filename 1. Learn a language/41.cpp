#include <bits/stdc++.h>
using namespace std;

bool lucky(int a){
    while(a){
        if(a%10==4 || a%10 ==7){
            a/=10;
            continue;

        }
        return 0;
    }
    return 1;
}

int main(){
    int a,b;
    bool flag=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(lucky(i)){cout<<i<<' ';
        flag=1;}
    }
    if(flag==0){
        cout<<-1;
    }
    return 0;
}