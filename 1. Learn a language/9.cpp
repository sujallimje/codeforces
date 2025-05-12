#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin>>c;
    int asc = static_cast<int>(c);
    if(asc>=48 && asc<=57) cout<<"IS DIGIT";
    else if(asc>=65){
        cout<<"ALPHA\n";
        if(asc<97){
            cout<<"IS CAPITAL";
        }else cout<<"IS SMALL";
    }

    return 0;
}