#include <bits/stdc++.h>
using namespace std;

int main(){
    long a,b,c;
    cin>>a>>b>>c;
    vector<long> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    sort(arr.begin(),arr.end());
    for(long it : arr){
        cout<<it<<"\n";
    }
    cout<<"\n"<<a<<"\n"<<b<<"\n"<<c;
    return 0;
}