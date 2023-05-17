#include <iostream>
using namespace std;

int main()
{
	//char* sentence;
	char ch;
	int wordNum=0;

	while (1) {
		
		ch = getchar();
		
		if (ch != ' ' && ch != '.' && ch != ',')
		{
			wordNum++;
		}
		else {
			cout << wordNum << ' ';
			wordNum = 0;
		}
		if (ch == '.')
		{
			break;
		}
		/*
		ch = getchar();

		if (ch <= 'Z' && ch >= 'A')
		{
			wordNum++;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			wordNum++;
		}

		if (ch == ' '|| ch == ',')
		{
			if (wordNum != 0)
			{
				cout << wordNum << ' ';
				wordNum = 0;
			}
			
		}

		if (ch == '.')
		{
			if (wordNum != 0)
			{
				cout << wordNum;
				wordNum = 0;
			}
			break;
		}
		*/	
	}
	
	
}