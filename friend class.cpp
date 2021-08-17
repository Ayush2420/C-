#include<bits/stdc++.h>
using namespace std;

class Complex;
class Calculate{
	public:

		int add(int a,int b)
		{
			return(a+b);
			
		}
		int sumcomplex(Complex ,Complex);
		int sum2(Complex ,Complex);
		
};
class Complex{

	int a,b;
		friend class Calculate;
	public:
	
		void setno(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
	friend	Complex sumcomplex(Complex o1,Complex o2);
		void printno(){
			cout<<"Your no."<<a<<"+"<<b<<"i";
		}
};
int Calculate:: sumcomplex(Complex o1,Complex o2){
			return (o1.a+o2.a);
		}
int Calculate::sum2(Complex o1,Complex o2){
				return (o1.b+o2.b);
		}
		

int main()
{ 
	Complex o1,o2;
	o1.setno(4,5);
	o2.setno(1,4);
	Calculate cal;
	int res=cal.sumcomplex(o1,o2);
	int sum=cal.sum2(o1,o2);
	cout<<res<<","<<sum;
   	
	return 0;
}
