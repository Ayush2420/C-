#include<bits/stdc++.h>

using namespace std;

class Y;

class X{
	int data;
	public:
		void setval(int val){
			data=val;
		}
		friend void add(X,Y);
};
class Y{
	int num;
	public:
		void setval(int val){
			num=val;
		}
			friend void add(X,Y);
};
void add(X o1,Y o2)
{
	cout<<"Sum data"<<o1.data+o2.num;
	
}
int main()
{
	X a;
	a.setval(3);
	Y b;
	b.setval(6);
	add(a,b);
	
	return 0;
}
