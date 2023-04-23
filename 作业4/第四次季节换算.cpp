#include <iostream>
using namespace std;


class seasonChange {
private:
	int seasonNum;

public:
	seasonChange()
	{	
		cin >> seasonNum;
	}
	void showSeason()
	{
		switch (seasonNum)
		{
		case 1:cout << "Spring" << endl;
			break;
		case 2:cout << "Summer" << endl;
			break;
		case 3:cout << "Fall" << endl;
			break;
		case 4:cout << "Winter" << endl;
			break;
		}
	}
};

int main()
{	
	seasonChange season;
	season.showSeason();

	system("pause");
	return 0;
}