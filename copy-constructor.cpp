#include<bits/stdc++.h>

using namespace std;
class number{
	int a;
	public:
		number(){}
		number(int num)
		{
			a=num;
		}
			number(number &b1)
		{
			cout<<"THE COPY CONSTRUCTOR ";
			a=b1.a;
		}
		void display(){
			cout<<"the num "<<a<<endl;
		}
};

int main()
{
	number x(9),y(8),z(7);
	x.display();
	y.display();
	z.display();
	number z1(y);
	z1.display();
	number z2 = x;
	z2.display();
	
	return 0;
}
