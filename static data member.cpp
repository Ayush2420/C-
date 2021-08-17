#include<bits/stdc++.h>
using namespace std;
class Employee{
    static	int count;
	int id;
	public:
		void setData()
		{
			cout<<"Enter id";
			cin>>id;
			count++;
		}
		void getData(){
		    cout<<"The id";
			cout<<id<<endl;
			//cout<<"the employee no."<<count<<endl;
		}
		static void getcount(){
			cout<<"the employee no."<<count<<endl;
		}
};

int Employee::count;

int main()
{
	Employee ayush,ak;
	ayush.setData();
	ayush.getData();
	Employee::getcount();
	
	ak.setData();
	ak.getData();
	Employee::getcount();
	
	return 0;
}
