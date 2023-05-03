#include <iostream>

using namespace std;

class calculate {
public:
	calculate()
	{
		int a,b;
		i = 0;

		cin >> a >> b;

		int res,yu;
		res = (a * 10) / b;

		while (1)
		{		
			if (i < 200)
			{
				decimal[i] = res;
				i++;
				
				yu = (a * 10) % b;
				
				if (yu == 0)
				{
					break;
				}

				a = yu;
				res = (a * 10) / b;
			}
			else
				break;
		}
	}

	void showRes()
	{
		cout << "0.";
		for (int x = 0; x < i; x++)
		{
			cout << decimal[x];
		}
		cout << endl;
	}

private:
	int decimal[200];
	int i;
};

int main()
{
	calculate cal1;
	cal1.showRes();
}