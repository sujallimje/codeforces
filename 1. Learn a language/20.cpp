#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,even=0,odd=0,pos=0,neg=0;
    long temp;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp%2==0){
            even++;
        }else{odd++;}
        if(temp>0){
            pos++;
        }else if(temp<0){
            neg++;
        }
    }

    cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<pos<<"\nNegative: "<<neg;
    return 0;
}