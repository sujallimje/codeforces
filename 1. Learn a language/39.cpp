#include <bits/stdc++.h>
using namespace std;

bool odd(long long a){
    if(a%2==0)return 0;
    return 1;
}
bool pal(long long a){
    string check ;
    while(a){
        
        if(a&1)check.push_back('1');
        else check.push_back('0');
        a>>=1;

    }
    // cout<<check<<endl;
    string rev= check;
    reverse(check.begin(), check.end());
    
    if(check == rev){
        
        return 1;

    } return 0;

}

int main(){
    long long a;
    cin>>a;
    if(odd(a) && pal(a) ) cout<<"YES";
    else cout<<"NO";

    return 0;
}