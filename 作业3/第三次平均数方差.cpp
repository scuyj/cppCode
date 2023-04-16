#include<iostream>
#include <vector>
using  namespace std;

class Aver {
	
private:
	vector<int> n;  //
	int count_num;  //���� 
	double M_average;  //ƽ���� 
	double M_variance;  //���� 


public:
	
	void getNum()
	{
		int number;
		while (cin >> number)
		{
			n.push_back(number);
			count_num++;
			if (cin.get() == '\n')  //���н��� 
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
