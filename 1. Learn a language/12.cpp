#include <bits/stdc++.h>
#include<manipulations.h>
using namespace std;

int main(){
    cout << fixed << setprecision(3) ; 
    float a;
    cin>>a;
    int b=static_cast<int>(a);
    if((a-b)>0){
        cout<<"float "<<b<<' '<<a-b;
    }else{
        cout<<"int "<<b;
    }



    return 0;
}