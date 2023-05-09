#include <iostream>
#include <string>
using namespace std;

class StrCpr {
private:
	string str;

	int n;
public:
	StrCpr()
	{		
		getline(cin, str);

		this->n = str.length();
	}


	void Compare(StrCpr &s1)
	{
		int cnt=0;
		int position;

		for (int i = 0; i < this->n;)
		{
			position = this->str.find(s1.str, i);

			if (position != string::npos)
			{
				cout << position << " ";
				i=position+1;
				cnt++;
			}
			else
				break;
		}

		if (cnt != 0)
		{
			cout << endl;
		}
		else
			cout << "-1" << endl;		
	}
};

int main()
{
	StrCpr s1;
	StrCpr s2;

	s2.Compare(s1);

	return 0;
}