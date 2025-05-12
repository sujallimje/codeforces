#include <bits/stdc++.h>
using namespace std;

void swapf(int *a,int* b){
    int temp;
    temp= *a;
    *a=*b;*b=temp;
}

int main(){
    int a,b;
    cin>>a>>b;
    swapf(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}