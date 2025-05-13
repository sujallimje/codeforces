#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp;
    while(n--){
        cin>>temp;
        long arr[temp],ans=INT_MAX;
        for(int i=0;i<temp;i++){
            cin>>arr[i];
        }
        for(int i=0;i<temp-1;i++){
            for(int j=i+1;j<temp;j++){
                long t2=(arr[i]+arr[j]+j-i);
                ans=min(ans, t2);
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}