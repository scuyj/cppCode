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
		this->bai = n / 100;          //��λ
		this->shi = (n % 100) / 10;  //ʮλ
		this->ge = n % 10;           //��λ 
	}

	void showSum()
	{
		cout << bai + shi + ge << endl;  //���
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