#include<iostream>
using namespace std;

int IsCancel(int a[], int n, int k);

int main()
{
	int n, k;
	int time[100];
	int judge;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> time[i];
	}

	if (IsCancel(time, n, k))
	{
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;
}

int IsCancel(int a[], int n, int k)
{
	int judge=0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] <= 0)
		{
			judge++;
		}
	}
	if (judge >= k)
		return 0;
	else
		return 1;
}