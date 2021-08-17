#include<bits/stdc++.h>

using namespace std;

class Complex{
	int a,b;
	public:
	//creating constructor
	Complex(int ,int);
		void printno(){
			cout<<"Your no."<<a<<"+"<<b<<"i";
		}	
	
};
Complex::Complex(int x,int y){
	a=x;
	b=y;
//	cout<<"Your no."<<a<<"+"<<b<<"i";
}
int main()
{
	Complex a(7,4);
	a.printno();
	Complex b=Complex(9,4);
	b.printno();
	return 0;
}

