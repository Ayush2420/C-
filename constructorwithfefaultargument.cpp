#include<bits/stdc++.h>

using namespace std;

class Simple{
	int data1,data2;
	public:
		Simple(int a,int b=9)
		{
			data1=a;
			data2=b;
		}
		void print()
		{
			cout<<"data1->"<<data1<<"data2->"<<data2;
		}
	
};

int main()
{
	Simple s(4,5);
	s.print();
	return 0;
}
