#include<iostream>
using namespace std;

class addPolynomial {

private:
	int res[101] = { 0 };
	int mi, xishu;
	int judge;
public:
	void inData()
	{
		judge = 0;
		for (int i = 0; 1; i++)
		{
			scanf("%d %d", &mi, &xishu);
			res[mi] += xishu;

			if (mi == 0)
			{
				judge++;
				if (judge == 2)
				{
					break;
				}
			}		
		}
	}

	void outRes()
	{
		int max;
		for (int i = 100; i >= 0; i--)
		{
			if (res[i] != 0)
			{
				max = i;
				printf("%dx%d", res[max], max);
				break;
			}
		}
		for (int i = max-1; i >= 1; i--)
		{
			if (res[i]>0)
			{
				if (i != 1)
				{
					printf("+%dx%d", res[i], i);
				}
				
				if (i == 1)
				{
					printf("+%dx", res[i]);
				}
			}
			
			if (res[i] < 0)
			{
				if (i != 1)
				{
					printf("%dx%d", res[i], i);
				}
				
				if (i == 1)
				{
					printf("%dx", res[i]);
				}
			}
		}
		if (res[0] > 0)
		{
			printf("+%d", res[0]);
		}
		if (res[0] < 0)
		{
			printf("%d", res[0]);
		}
	}
};

int main()
{
	addPolynomial p;
	p.inData();
	p.outRes();
}
