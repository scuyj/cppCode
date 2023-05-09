#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Key {
private:
	string key1;
	int group_length;
	string key2;
	//char key2[10000];
	int len2;
public:
	Key()
	{
		cin >> key1;
		cin >> group_length;
		len2 = 0;
	}

	void combine()
	{	
		char temp[1000];
		for (int i = 0; i < key1.size(); i++)
		{
			if (key1[i] != '-')
			{
				temp[len2] = toupper(key1[i]);
				len2++;
			}
		}

		key2 = temp;
	}
	void showRes()
	{
		int i;
		int first_len = len2 % group_length;
		int res_group = (len2 - 1) / group_length;

		for (i = 0; i < first_len; i++)
		{
			cout << key2[i];
		}
		
		for (int j = 0; j < res_group; j++)
		{
			cout << '-';
			for (int x = i; x < group_length + i; x++)
			{
				cout << key2[x];
			}
			i += group_length;
		}
	}
};

int main()
{
	Key key1;

	key1.combine();
	key1.showRes();

	return 0;
}