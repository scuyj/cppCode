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
	cout << "直径="<<r1.ShowD() << endl;
	cout <<"周长="<<r1.ShowC() << endl;
	cout <<"面积="<< r1.ShowS() << endl;
	
	return 0;
}
