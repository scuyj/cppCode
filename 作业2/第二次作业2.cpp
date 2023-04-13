#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class Decimal{
	private:
		int m_n;
		int res[20];
	
	public:
		Decimal(int n)
		{
			this->m_n=n;
			
			for(int i=0;i<20;i++)
			{
				this->res[i]=-1;
			}
		}
		
		void calculate()
		{
			int i = 0;
			while(m_n > 0)
			{
				res[i] = m_n % 8;
				m_n /= 8; 
				i++;
			}
		}
		
		void Out()
		{
			for(int i=19;i>=0;i--)
			{
				if(res[i]>=0)
				{
					printf("%d",res[i]);
				}
			}
		}
				
};
int main()
{
	int n;
	
	scanf("%d",&n);
	Decimal num(n);
	num.calculate();
	num.Out(); 
}
