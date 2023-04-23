#include<iostream>
using namespace std;

class threeInt {

private:
	int ge;
	int shi;
	int bai;

public:
	void inNum(int n)
	{
		this->bai = n / 100;          //百位
		this->shi = (n % 100) / 10;  //十位
		this->ge = n % 10;           //个位 
	}

	void showSum()
	{
		cout << bai + shi + ge << endl;  //求和
	}
};

int main()
{
	threeInt sumOfInt;
	int n;

	cin >> n;
	sumOfInt.inNum(n);
	sumOfInt.showSum();

	system("pause");
	return 0;
}