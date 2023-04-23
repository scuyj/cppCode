#include <iostream>

using namespace std;

class gradeJudge {

private:
	int grade;

public:
	gradeJudge()
	{
		cin >> this->grade;
	}

	void showRes() {
		if (grade < 60)
		{
			cout << "E" << endl;
		}
		else if (grade < 70)
		{
			cout << "D" << endl;
		}
		else if (grade < 80)
		{
			cout << "C" << endl;
		}
		else if (grade < 90)
		{
			cout << "B" << endl;
		}
		else if(grade <= 100)
		{
			cout << "A" << endl;
		}

	}
};

int main()
{
	gradeJudge grade1;
	grade1.showRes();

	system("pause");
	return 0;
}