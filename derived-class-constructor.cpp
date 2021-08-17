#include<bits/stdc++.h>
using namespace std;
class base1{
	int data1;
	public:
		base1(int i){
			data1=i;
			cout<<"Base1 class constructor"<<endl;
		}
		void print1(){
			cout<<"the data 1 "<<data1<<endl;
		}
};
class base2{
	int data2;
	public:
		base2(int i){
			data2=i;
			cout<<"Base2 class constructor"<<endl;
		}
		void print2(){
			cout<<"the data 2 "<<data2<<endl;
		}
};
class derived:  public base1, public base2{
	int derived1,derived2;
	public:
		derived(int a,int b,int c,int d):base1(a),base2(b){
			 derived1=c;
			 derived2=d;
			 cout<<"Derived class constructor"<<endl;
		}
		void print3(){
			cout<<"The data of derived1  "<<derived1<<endl;
			cout<<"The data of derived2  "<<derived2<<endl;
		}
};
int main()
{
	derived d1(5,6,7,8);
	d1.print1();
	d1.print2();
	d1.print3();
	
	return 0;
}
