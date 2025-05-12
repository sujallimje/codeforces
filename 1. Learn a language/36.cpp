#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double d = a / b;
    int c = static_cast<int>(d);
    cout << "floor " << a << " / " << b << " = " << c;
    cout << "\n";
    if (d == c)
    {
        cout << "ceil " << a << " / " << b << " = " << c;
    }
    else
    {
        cout << "ceil " << a << " / " << b << " = " << c + 1;
    }
    cout << "\n";
    if (d - c >= 0.5)
    {
        cout << "round " << a << " / " << b << " = " << c + 1;
    }
    else
    {
        cout << "round " << a << " / " << b << " = " << c;
    }

    return 0;
}