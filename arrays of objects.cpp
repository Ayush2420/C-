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
			cout<<"the employee no."<<count<<endl;
		}
		
};
int Employee::count;



int main()
{int i;
	Employee arr[5];
	for( i=0;i<5;i++){
      	arr[i].setData();
    	arr[i].getData();
    }
	
	return 0;
}
