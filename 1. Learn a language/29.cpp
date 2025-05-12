#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string num;
    for(int i=0;i<n;i++){
        cin>>num;
        for(int i=num.size()-1;i>=0;i--) cout<<num[i]<<" ";
        cout<<'\n';
    }
    return 0;
}