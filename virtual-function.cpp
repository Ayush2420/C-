#include<bits/stdc++.h>
using namespace std;

class baseclass{
	public:
		int var1;
	virtual	void print(){
			cout<<"The base class "<<var1<<endl;
		}
		
};
class derived:public baseclass{
		public:
		int var2;
		void print(){
			cout<<"The derived class "<<var2<<endl;
		}
		
};
int main(){
	baseclass *bptr;
	derived ob1;
	bptr=&ob1;
	
	bptr->var1=33;
	bptr->print();
	return 0;
}
