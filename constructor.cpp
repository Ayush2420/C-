#include<bits/stdc++.h>
using namespace std;
class Complex{
	int a,b;
	public:
	//creating constructor
	Complex();
		void printno(){
			cout<<"Your no."<<a<<"+"<<b<<"i";
		}	
	
};
Complex::Complex()
{
	a=10;
	b=0;
}
int main()
{
	Complex c;
	c.printno();
	return 0;
}
