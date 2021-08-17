#include<bits/stdc++.h>
using namespace std;
template <class T>
class ayush{
	public:
		T a;
		
	ayush(T a1){
		a=a1;
		
	}
	void display();

};
template<class T>
void ayush<T>::display(){
		cout<<a<<endl ;
	}
	
void fun(int b)
{
	cout<<"The first programer "<<b<<endl;
}
template<class T>
void fun(T b)
{
	cout<<"The template programer "<<b<<endl;
}
int main()
{
	ayush <int> a(a);
	a.a=39;
	cout<<a.a<<endl;
	
	a.display();
	fun(67);
	fun(40.8);
	return 0;
}
