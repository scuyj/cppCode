#include <iostream>

using namespace std;

class ageJudge {

private:
	int age;

public:
	ageJudge()
	{
		cin >> this->age;
	}

	void showRes() {	
		if (age > 0 && age <= 10)
		{
			cout << "Children" << endl;
		}
		else if (age <= 20)
		{
			cout << "Teenagers" << endl;
		}
		else if (age <= 40)
		{
			cout << "Youth" << endl;
		}
		else if (age <= 50)
		{
			cout << "middle-aged" << endl;
		}
		else if (age <= 80)
		{
			cout << "Elderly" << endl;
		}
		else if (age <= 100)
		{
			cout << "Old man" << endl;
		}
				
	}
};

int main()
{
	ageJudge age1;
	age1.showRes();

	system("pause");
	return 0;
}