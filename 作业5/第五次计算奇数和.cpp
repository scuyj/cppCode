#include<iostream>
#include<stdio.h>
using namespace std;

int even(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}

	return 0;
}

class sum {
public:
	sum()
	{
		int num;
		res = 0;
		while (1)
		{
			cin >> num;
			if (num <= 0)
			{
				break;
			}
			if (!even(num))
			{
				res += num;
			}
		}
	}

	void Out()
	{
		cout << res << endl;
	}

private:
	int res;
};

int main()
{
	sum sum1;
	sum1.Out();
}