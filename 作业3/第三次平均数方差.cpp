#include<iostream>
#include <vector>
using  namespace std;

class Aver {
	
private:
	vector<int> n;  //
	int count_num;  //总数 
	double M_average;  //平均数 
	double M_variance;  //方差 


public:
	
	void getNum()
	{
		int number;
		while (cin >> number)
		{
			n.push_back(number);
			count_num++;
			if (cin.get() == '\n')  //换行结束 
			{
				break;
			}
		}
	}

	void numCount()
	{
		count_num = n.size();
	}

	void cal_average()
	{
		double sum=0;
		for (int i = 0; i < count_num; i++)
		{
			sum += n[i];
		}
		M_average = (double)sum / count_num;

	}

	double showAverage()
	{
		return M_average;
	}

	void cal_variance()
	{
		double variance=0;
		for (int i = 0; i < count_num; i++)
		{
			variance += (n[i] - M_average) * (n[i] - M_average);
		}

		M_variance =(double) variance / count_num;

	}
	double showVariance()
	{
		return M_variance;
	}


};

int main()
{
	Aver figure;
	
	figure.getNum();
	figure.numCount();
	figure.cal_average();
	figure.cal_variance();
	
	printf("%.2lf %.2lf", figure.showAverage(), figure.showVariance());
	
}
