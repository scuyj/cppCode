#include<iostream>
#include<stdio.h>

using namespace std;

class Trans{
	private:
		int n;
		int m;
		int res[20];
		
	public:
		Trans(int n,int m)
		{
			this->n=n;
			this->m=m;
			for(int i = 0; i < 20; i++)  //初始化-1 
			{
				this->res[i]=-1;
			}
		}
		
		void cal()
		{
			for(int i=0;n > 0;n /= m, i++)
			{
				res[i]=n % m;    //取余 
			}
		}
		
		void Out()
		{
			for(int i = 19; i >= 0; i--)
			{
				if(res[i] >= 0)
				{
					printf("%d",res[i]);  //逆序输出 
				}
			}
			printf("\n");
		}
}; 

int main()
{
	
	int N;
	int n,m;
	
	scanf("%d",&N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d %d",&n,&m);
		
		Trans target(n,m);
		target.cal();
		target.Out();
	}
	
	return 0; 
 } 
