#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
        return 0;

    long long arr[n]; 
    arr[0] = 0;
    if (n > 1)
        arr[1] = 1;

    for (int i = 0; i < n; i++)
    {
        if (i > 1)
            arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i] << ' ';
    }

    cout << endl;
    return 0;
}
