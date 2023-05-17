#include <iostream>
using namespace std;
int step = 0;
void move(int n,char a, char b)
{
	cout << "Step" << step << ": " << "Move Disk" << n << " From " << a << " To " << b << endl;
}

void hannuo(int n, char a, char b, char c)
{
	if (n == 1)
	{
		step++;
		move(1, a, c);
		
	}
	else
	{
		hannuo(n - 1, a, c, b);
		step++;
		move(n, a, c);		
		hannuo(n - 1, b, a, c);
	}
}

int main()
{
	int num;

	cin >> num;
	hannuo(num, 'A', 'B', 'C');

	return 0;
}