#include<bits/stdc++.h>
using namespace std;
template <class T1=int,class T2=float,class T3=char>
class ayush{
	public:
		T1 a;
		T2 b;
		T3 c;
	ayush(T1 a1,T2 b1,T3 c1){
		a=a1;
		b=b1;
		c=c1;
	}
	void display(){
		cout<<a<<endl<<b<<endl<<c<<endl;
	}
};
int main()
{
	ayush<> a(23,60.9,'C');
	a.display();
	cout<<endl;
	ayush<float,char,string>a1(23.8,'A',"ayush");
	a1.display();
}
