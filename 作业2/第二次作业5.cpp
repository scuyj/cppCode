#include <iostream>
#include <stdio.h>

using namespace std;

class Scale {
	private:
		int original_num;		
		char res[20];
		int s;
		
	public:
		Scale(int n,int s)
		{
			this->original_num=n;
			this->s=s;
			
			for(int i=19; i>=0; i--)
			{
				res[i]='g';
			}			
		}
		
		void calculate()
		{
			for(int i = 0; this->original_num > 0; i++, this->original_num /= this->s)
			{
				int r = this->original_num % this->s;
				if(r >= 10 )
				{
					if(r == 10)
					{
						res[i]='A';
					}
					else if(r == 11)
					{
						res[i]='B';
					}
					else if(r == 12)
					{
						res[i]='C';
					}
					else if(r == 13)
					{
						res[i]='D';
					}
					else if(r == 14)
					{
						res[i]='E';
					}
					else if(r == 15)
					{
						res[i]='F';
					}
				}
				if(r < 10)
				{
					res[i]=r+'0';
				}
			}
		}
		
		void Out()
		{
			for(int i=19; i >= 0; i--)
			{
				if(res[i] != 'g')
				{
					printf("%c",res[i]);
				}
			}
			printf("\n");
		}
}; 

int main()
{
	int N;
	int n;
	int s;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d %d",&n,&s);
		Scale scale(n,s);
		scale.calculate();
		scale.Out();
	}
	
	
 } 
