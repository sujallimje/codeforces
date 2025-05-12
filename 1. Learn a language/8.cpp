#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if (a == b || b % a == 0 || a % b == 0)
    {
        cout << "Multiples";
    }
    else
    {
        cout << "No Multiples";
    }
    return 0;
}