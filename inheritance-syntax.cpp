#include<bits/stdc++.h>

using namespace std;
//base class
class employee{
	
	
	public:
		int id;
		float salary;
		employee(){}
		employee(int n)
		{
			id=n;
			salary=34.04;
		}
};
//derived class
class pero:public employee{
	public:
		int skill=0;
		pero(int pro){
			id=pro;
			skill=10;
		}
};

int main(){
	employee a1(1),a2(2);
	cout<<a1.salary<<endl;
	cout<<a2.salary<<endl;
	pero p1(9);
	cout<<p1.skill;
	
}
