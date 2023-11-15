#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for (i = 0; n; ++i)
    {
        n /= 10;
    }
    cout << i << "\n";
}

