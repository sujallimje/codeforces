#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    char p,q;
    cin>>a>>p>>b>>q>>c;
    switch(p){
        case '+':
            if(a+b==c){
                cout<<"Yes";
            }else cout<< a+b;
            break;
        case '-':
        if(a-b==c){
            cout<<"Yes";
        }else cout<<a-b;
            break;
        case '*' :
            if(a*b==c){
                cout<<"Yes";
            }else cout<<a*b;
            break;
    }
    return 0;
}