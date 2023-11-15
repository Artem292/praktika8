#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num;
	cout << " введите число: ";
	cin >> num;
	if (num == 0)
	{
		cout << " число равно 0 " << endl;
	}
	if (num > 0)
	{
		cout << " число положительное " << endl;
	}
	if (num < 0)
	{
		cout << " число отрицательное " << endl;
	}
	 return 0;
}
