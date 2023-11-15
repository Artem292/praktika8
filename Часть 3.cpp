#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 92,24,15,8 };
    int s = 1;
    for (int i = 0; i < 4; i++)
    {
        s *= arr[i];
    }
    cout << s;
}
