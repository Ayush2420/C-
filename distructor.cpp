#include<bits/stdc++.h>

using namespace std;

class num{
	
	public:
		int count=0;
		num(){
			count++;
			cout<<"the constructor called "<<count<<endl ;
			
		}
		~num(){
			cout<<"this is the time my distructor is called "<<cout<<endl;
		count--;
		}
};

int main()
{
	cout<<"we are is main "<<endl;
	cout<<"creating an first object "<<endl;
	num n1;
	{
			cout<<"entering in block "<<endl;
			cout<<"creating an two more object "<<endl;
			num n2,n3;
			cout<<"exiting in block "<<endl;
		
	}
	cout<<"back in main"<<endl;
	return 0;
}
