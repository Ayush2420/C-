#include<bits/stdc++.h>
using namespace std;
class Complex{
	int a,b;
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
Complex sumcomplex(Complex o1,Complex o2)
{
	Complex o3;
	o3.setno((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main()
{ Complex c1,c2,sum;
    c1.setno(1,4);
    c2.setno(5,8);
    c1.printno();
    c2.printno();
    sum=sumcomplex(c1,c2);
    sum.printno();
    
    
	return 0;
}
