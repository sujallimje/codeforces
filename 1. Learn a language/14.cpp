#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,mini,maxi;
    cin>>a>>b>>c;
    mini= min(a,b);
    mini=min(mini,c);
    maxi=max(a,b);
    maxi=max(maxi,c);
    cout<<mini<<' '<<maxi;
    return 0;
}