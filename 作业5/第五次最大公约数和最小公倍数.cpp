#include <iostream>
using namespace std;

int maxdivisor(int a, int b)
{
	while ((a % b) != 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}
	return b;
}

int minmultiple(int a, int b)
{
	return a * b / maxdivisor(a, b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "最大公约数是：" << maxdivisor(a, b) << endl;
	cout << "最小公倍数是：" << minmultiple(a, b) << endl;
}