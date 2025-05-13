#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,pos;
    cin>>n;
    long long arr[n],maxi;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxi=arr[0];pos=0;
    for(int i=1;i<n;i++){
        if(arr[i]<maxi){
            maxi= arr[i];
            pos= i;
        }
    }
    cout<<maxi<<' '<<pos+1;
    
    return 0;
}