#include <iostream>

using namespace std;

class Time {
public:
	
	//传入北京时间 
	void putTime(int time_num)
	{
		BJT = time_num;
	}

	//判断输入数据 
	int judgeTime()
	{
		int hour;

		hour = BJT / 100;
		BJT_min_shi = (BJT - hour*100) / 10;  //分钟的十位 
		BJT_min_ge = BJT - hour * 100 - BJT_min_shi * 10;   //分钟的个位 

		if (hour <= 7)
		{
			UTC_hour = hour - 8 + 24;
		}

		else
		{
			UTC_hour = hour - 8;
		}
		
		
		//判断该以何种方式输出UTC 
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
		if (this->judgeTime() == 1)  //只有分钟 
		{
			cout << BJT_min_shi << BJT_min_ge << endl;
		}

		if (this->judgeTime() == 2)  //只有分钟个位 
		{
			cout << BJT_min_ge << endl;
		}
		if (this->judgeTime() == 0)  //正常情况 
		{
			cout << UTC_hour << BJT_min_shi << BJT_min_ge << endl;
		}
	}
private:
	int BJT;
	int BJT_min_shi; //分钟的十位 
	int BJT_min_ge;  //分钟的个位 
	int UTC_hour; 
	int UTC_min;

};

int main()
{
	Time bjtTimeTrans;
	
	int bjt;
	//传入北京时间 
	scanf_s("%d", &bjt);

	bjtTimeTrans.putTime(bjt);
	bjtTimeTrans.getTime();

	system("pause");
	return 0;
}
