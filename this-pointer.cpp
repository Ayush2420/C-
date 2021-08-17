#include<bits/stdc++.h>
using namespace std;
class a{
	int a1;
	public:
		void st(int a1){
		  this->a1=a1;
		}
		void gt(){
			cout<<"DATA "<<a1<<endl;
		}
};
int main(){
	a aa;
	aa.st(4);
	aa.gt();
	return 0;
}
