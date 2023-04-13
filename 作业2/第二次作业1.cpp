#include <iostream>
#include <stdio.h>

using namespace std;

class Tri {
	private:
		int m_n;
		int yh[15][15];
		
	public:
		Tri(int n)
		{
			m_n=n;
			yh[0][0]=1;
			yh[1][0]=1;
			yh[1][1]=1;
			
			for(int i=1;i<15;i++)
			{
				yh[0][i]=0;
			} 
			for(int i=2;i<15;i++)
			{
				yh[1][i]=0;
			}
			
			for(int x=2;x<15;x++){                   //计算循环 
	    		for(int y=0;y<15;y++){
	    			if(y-1>=0)
	    				yh[x][y]=yh[x-1][y-1]+yh[x-1][y]; //上方两数之和 
	    			else
	    				yh[x][y]=1;   //两边为1 
				}
			}
		}
		
		/*~Tri()
		{
			for(int i=2;i<15;i++)
			{
				for(int j=0;j<15;j++)
				{
					yh[i][j]=0;
				}
			}
		}*/
		
		void Out()
		{
			for(int i=0;i<m_n;i++){                  //输出杨辉三角 
			
				int count=0;                         //count计数是否该换行 
		
				for(int j=0;j<m_n;j++){
			    
					if(yh[i][j]!=0){
			   			printf("%d ", yh[i][j] ) ;       //输出非零数并count++ 
			   			count++;
					}
				
					if(count==i+1){
			    		printf("\n");                 //达到换行条件，count归零 
			    		count=0; 
					}
						    
				}
			}
		}
		
		
};

int main()
{
	
	int N,num;
	
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&num);
		Tri t(num);
		t.Out();
	}
	
}
