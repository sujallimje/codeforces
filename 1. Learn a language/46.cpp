#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long arr[n], pos;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>pos;
    for(int i=0;i<n;i++){
        if(pos== arr[i]){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}