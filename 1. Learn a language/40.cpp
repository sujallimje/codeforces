#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;
    if(n<2)return 0;
    int arr[n+1]={0};

    for(int i=2;i<=n;i++){
        for(int j=1;i*j<=n;j++){
            arr[i*j]++;
        }
    }
    for(int i=2;i<=n;i++){
        if (arr[i]<=1){
            cout<<i<<' ';
        }
    }
    return 0;
}