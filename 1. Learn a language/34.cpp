#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    while(n--){
        cin>>temp;
        int i=0,sum=0;
        while(temp>0){
            
            if(temp & 1){
                sum+=pow(2,i);
                i++;
            }
            temp>>=1;
        }
        cout<<sum<<"\n";
    }
    
    return 0;
}