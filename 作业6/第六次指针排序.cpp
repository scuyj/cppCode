#include <iostream>

using namespace std;

int sort(int num[], int n);

int main()
{
	int num[100];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	sort(num, n);

	for (int i = 0; i < n; i++)
	{
		cout << num[i] << " ";
	}

	return 0;
}

int sort(int num[], int n)
{
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(num + i) > *(num + j))
			{
				temp = *(num + j);
				*(num + j) = *(num + i);
				*(num + i) = temp;
			}
		}
	}

	return 1;
}