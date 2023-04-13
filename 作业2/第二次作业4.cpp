#include <iostream>

using namespace std;

class Date{
	private:
		int month,day,year;
		int count_run; 
		int judge_yue;
		int day_num1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		int day_num2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		int total_num;
		
	public:
		Date(int y,int m,int d)
		{
			year=y;
			month=m;
			day=d;
			
			
		}
		
		void RunNian(){
			count_run=(year-1900) / 4 + 1;
			
			if(year/4 == 0 && month > 2)
			{
				judge_yue = 1;
			}
			else 
			judge_yue = 0;
		}
		
		void Calculate()
		{
			int num1=0;
			if(judge_yue == 0)
			{
				
				for(int i = 0; i < month-1 ;i++)
				{
					num1 += day_num1[i];
				}
				num1 += day;
				total_num= (year-(count_run-1)*4 -1900-1)*365 + (366+365+365+365)*(count_run-1) +num1;
			}
			
			if(judge_yue == 1)
			{
				
				for(int i = 0; i < month-1 ;i++)
				{
					num1 += day_num2[i];
				}
				num1 += day;
				total_num= (year-(count_run-1)*4 -1900)*365 + (366+365+365+365)*(count_run-1) +num1;
			}
		}
		
		void Out()
		{
			
			int judge=total_num % 7;
			
			switch(judge){
				case 0: printf("Monday\n");break;
				case 1: printf("Tuesday\n");break;
				case 2: printf("Wednesday\n");break;
				case 3: printf("Tursday\n");break;
				case 4: printf("Friday\n");break;
				case 5: printf("Saturday\n");break;
				case 6: printf("Sunday\n");break;
			}
		}
		
};

int main()
{
	int y,m,d;
	scanf("%d-%d-%d",&y,&m,&d);
	
	Date date(y,m,d);
	date.RunNian();
	date.Calculate();
	date.Out();
	
	return 0;
}
