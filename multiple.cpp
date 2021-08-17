#include<bits/stdc++.h>
using namespace std;
class base1{
	protected:
		int base1int;
		public:
			setbase1(int a){
				base1int=a;
			}
};
class base2{
	protected:
		int base2int;
	public:
		setbase2(int a){
			base2int=a;
			}
};
class derived:public base1,public base2{
	public:
		void show(){
			cout<<"BASE1 -> "<<base1int<<endl;
			cout<<"BASE2 -> "<<base2int<<endl;
			cout<<"SUM = "<<base1int+base2int<<endl;;
		}
};
int main(){
	derived d1;
	d1.setbase1(25);
	d1.setbase2(25);
	d1.show();
	return 0;
}
