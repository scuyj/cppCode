#include <iostream>

using namespace std;

int MyStrstr(char str1[], char str2[])
{
	int i, j;

	for ( i = 0; i < strlen(str1); )
	{
		int x = i;

		for (j = 0; j < strlen(str2); )
		{		
			if (str1[x] == str2[j])
			{
				x++;
				j++;
			}
			else
			{
				i++;
				break;
			}
				
		}

		if (j == strlen(str2))
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	char str1[500];
	char str2[500];

	cin >> str1 >> str2;

	cout << MyStrstr(str1, str2) << endl;

	return 0;
}