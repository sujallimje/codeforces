#include <bits/stdc++.h>
using namespace std;

long long sq(long long  last , int p ){
    return pow(last,2)*(1-pow(last,p))/(1-pow(last,2));
}

int main(){
    int b;
    long long sum=0,last=0;
    cin>> last>>b;
    
    
    long long ans=(last,b);
    for(int i=2;i<=b;i+=2){
        sum+= pow(last,i);
    }
    cout<<sum;
    return 0;
}