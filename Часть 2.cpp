#include <iostream>
using namespace std;
int main() 
{
    int arr[10], s = 0;
    for (int& x : arr) 
    {
        cin >> x;
        s += x;
    }
    cout << s << endl;
}
