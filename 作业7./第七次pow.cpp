#include<iostream>
using namespace std;

int main()
{
	int num;
	int mi;
	int res=1;

	cin >> num >> mi;
	
	for (int i = 0; i < mi; i++)
	{
		res *= num;
	}

	cout << res << endl;
}