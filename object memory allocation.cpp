#include<bits/stdc++.h>

using namespace std;
class shop{
	int itemId[100];
	int itempri[100];
	int count=0;
	public:
		//void intitcounter(){count=0;}
		void getprice();
		void setprice();
		
};
void shop::getprice()
{
	cout<<"enter the id of item"<<endl;
	cin>>itemId[count];
	cout<<"enter the price of item"<<endl;
	cin>>itempri[count];
	count++;
	
}
void shop::setprice()
{
	for(int i=0;i<count;i++)
	  cout<<"id"<<itemId[i]<<"price"<<itempri[i]<<endl;
}

int main()
{
	shop s;
	s.getprice();
	s.setprice();
	return 0;	
}
