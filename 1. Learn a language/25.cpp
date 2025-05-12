#include <bits/stdc++.h>
using namespace std;

long long fac(long long x){
    if(x<=1)return 1;
    return x* fac(x-1);
}

int main(){
    long long  n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        cout<< fac(num)<<"\n";

    }
    return 0;
}