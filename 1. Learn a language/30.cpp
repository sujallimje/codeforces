#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,sum;
    while (true){
        cin>>m>>n;
        sum=0;
        if(m<=0 || n<=0)return 0;
        if(n<m)swap(m,n);
        for(int i=m;i<=n;i++){
            cout<<i<<' ';
            sum+=i;

        }
        cout<<"sum ="<< sum<<"\n";
    }
    return 0;
}