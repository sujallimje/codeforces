#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long arr[n],maxi;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxi=arr[0];
    for(int i=1;i<n;i++){
        maxi= max(maxi,arr[i]);
    }
    cout<<maxi;
    
    return 0;
}