#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        int sum=0;
        if(a>b)swap(a,b);
        if(a%2!=0){
            a++;
        }
        for(int i=a+1;i<b;i+=2){
            sum+=i;

        }
        cout<<sum<<"\n";
    }
    return 0;
}