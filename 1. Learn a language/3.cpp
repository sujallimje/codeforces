#include<iostream>
#include<iomanip>
#define pi 3.141592653
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     
     double a;
     cin>>a;
     cout<<pi*a*a;
}