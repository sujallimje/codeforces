#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    char s;
    cin>>a>>s>>b;
    if(s=='>' ){
        if(a>b)cout<<"Right";
        else cout<< "Wrong";
    }else if (s=='<'){
        if(a<b)cout<<"Right";
        else cout<< "Wrong";
        
    }else{
        if(a==b)cout<<"Right";
        else cout<< "Wrong";
        
    }
    return 0;
}