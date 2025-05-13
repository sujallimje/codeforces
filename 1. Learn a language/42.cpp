#include <bits/stdc++.h>
using namespace std;

bool yes(int i,int a,int b){
    int sum=0;
    while(i){
        sum+=i%10;
        i/=10;
        
    }
    if(sum>b || sum<a)return 0;
    return 1;
}

int main(){
    int n,a,b;
    long sum=0;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        if(yes(i,a,b)){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}