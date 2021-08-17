#include<bits/stdc++.h>

using namespace std;

class Complex{
	int a,b;
	public:
		Complex(int x,int y)
		{
			a=x;
			b=y;
		}
		Complex(int x)
		{
			a=x;
			b=0;
		}
		void printno(){
			cout<<"Your no."<<a<<"+"<<b<<"i";
		}	
	
};
int main()
{
	Complex a(7,4);
	a.printno();
	Complex b=Complex(9);
	b.printno();
	return 0;
}

