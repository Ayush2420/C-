#include <bits/stdc++.h>
using namespace std;
class base1{
	public:
		void greet(){
			cout<<"How are you"<<endl;
		}
		
};
class base2{
		public:
		void greet(){
			cout<<"Kaise hai"<<endl;
		}
};
class derived:public base1,public base2{
	int a;
	public:
		void greet(){
			cout<<"English-> ";
			base1::greet(); 
			cout<<"Hindi-> ";
			base2::greet(); 
		}
		
};

int main(){
	base1 obj1;
	base2 obj2;
	obj1.greet();
	obj2.greet();
	derived d1;
	d1.greet();
	
	return 0;
	
}
