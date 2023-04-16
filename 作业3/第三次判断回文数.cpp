#include <iostream>
#include <string>

using namespace std;

class Palindrome{
	private:
		int num;
		int max;
	public:
		Palindrome(int n,int k)
		{
			this->num=n;
			this->max=k;
		}
		
		bool isPalindrome(int n)
		{
			string str_num = to_string(n);
			
			for (int i = 0; i < str_num.length() / 2; i++)
    		{
        		if (str_num[i] != str_num[str_num.length() - i - 1])
        		{
            		return false;
        		}
    		}
    		
    		return true;
		}
		
		void out()
		{
			int count =0;
			for(int i = num+1; count < max;i++)
			{
				if(isPalindrome(i))
				{
					printf("%d ",i);
					count++; 
				}
			} 
			printf("\n");
		}
		
};

int main()
{
	int N;
	int n,k;
	scanf("%d",&N);
	
	
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d %d",&n,&k);
		Palindrome num(n,k);
		num.out();
	}
	
	
}
