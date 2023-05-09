#include <iostream>

using namespace std;

class Number {
public:
	string num;
	Number()
	{
		cin >> num;
	}
};
void numTransfer(string num)
{
	int n = num.size();

	for (int i = 0; i < n; i++)
	{
		if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C')
			cout << 2;
		if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F')
			cout << 3;
		if (num[i] == 'G' || num[i] == 'H' || num[i] == 'I')
			cout << 4;
		if (num[i] == 'J' || num[i] == 'K' || num[i] == 'L')
			cout << 5;
		if (num[i] == 'M' || num[i] == 'N' || num[i] == 'O')
			cout << 6;
		if (num[i] == 'P' || num[i] == 'Q' || num[i] == 'R' || num[i] == 'S')
			cout << 7;
		if (num[i] == 'T' || num[i] == 'U' || num[i] == 'V')
			cout << 8;
		if (num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i] == 'Z')
			cout << 9;
	}
}

int main()
{
	Number phoneNum1;

	numTransfer(phoneNum1.num);

	return 0;
}