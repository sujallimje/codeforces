#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin>>c;
    int asc = static_cast<int> (c);
    if(c>=97){
        asc-=32;
        c= static_cast<char>(asc);
        cout<<c;
        
    }else
    {asc+=32;
    c= static_cast<char>(asc);
    cout<<c;}
    return 0;
}