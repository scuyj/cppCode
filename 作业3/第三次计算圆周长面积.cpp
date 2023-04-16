#include <iostream>
#define pi 3.14
using namespace std;

class Radius {
	private:
		int m_r;
		
	public:
		Radius(int r)
		{
			m_r=r;
		 } 
		 
		double ShowD()
		{
			return 2*m_r;
		}
		
		double ShowC()
		{
			return 2*pi*m_r;
		}
		
		double ShowS()
		{
			return pi*m_r*m_r;
		 } 
}; 

int main()
{
	int r;
	scanf("%d",&r); 
	
	Radius r1(r);
	cout << "ֱ��="<<r1.ShowD() << endl;
	cout <<"�ܳ�="<<r1.ShowC() << endl;
	cout <<"���="<< r1.ShowS() << endl;
	
	return 0;
}
