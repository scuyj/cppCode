#include <iostream>

using namespace std;

class Time {
public:
	
	//���뱱��ʱ�� 
	void putTime(int time_num)
	{
		BJT = time_num;
	}

	//�ж��������� 
	int judgeTime()
	{
		int hour;

		hour = BJT / 100;
		BJT_min_shi = (BJT - hour*100) / 10;  //���ӵ�ʮλ 
		BJT_min_ge = BJT - hour * 100 - BJT_min_shi * 10;   //���ӵĸ�λ 

		if (hour <= 7)
		{
			UTC_hour = hour - 8 + 24;
		}

		else
		{
			UTC_hour = hour - 8;
		}
		
		
		//�жϸ��Ժ��ַ�ʽ���UTC 
		if (UTC_hour == 0 && BJT_min_shi != 0)
		{
			return 1;
		}

		else if (UTC_hour == 0 && BJT_min_shi == 0)
		{
			return 2;
		}
		else
			return 0;
	}

	void getTime()
	{
		if (this->judgeTime() == 1)  //ֻ�з��� 
		{
			cout << BJT_min_shi << BJT_min_ge << endl;
		}

		if (this->judgeTime() == 2)  //ֻ�з��Ӹ�λ 
		{
			cout << BJT_min_ge << endl;
		}
		if (this->judgeTime() == 0)  //������� 
		{
			cout << UTC_hour << BJT_min_shi << BJT_min_ge << endl;
		}
	}
private:
	int BJT;
	int BJT_min_shi; //���ӵ�ʮλ 
	int BJT_min_ge;  //���ӵĸ�λ 
	int UTC_hour; 
	int UTC_min;

};

int main()
{
	Time bjtTimeTrans;
	
	int bjt;
	//���뱱��ʱ�� 
	scanf_s("%d", &bjt);

	bjtTimeTrans.putTime(bjt);
	bjtTimeTrans.getTime();

	system("pause");
	return 0;
}
