#include<bits/stdc++.h>

using namespace std;

class BankDeposit{
	int principal;
	int years;
	float interest;
	float returnValue;
	
	public:
		BankDeposit(){}
		BankDeposit(int p,int y,float r);//for floating no. of r
		BankDeposit(int p, int y, int r);//for int variable like 14 ect;
		void show();
};
BankDeposit::BankDeposit(int p,int y,float r){
	principal=p;
	years=y;
	interest=r;
	returnValue=principal;
	for(int i=0;i<y;i++)
	{
		returnValue=returnValue*(1+r);
	}
}
BankDeposit::BankDeposit(int p,int y,int r){
	principal=p;
	years=y;
	interest=float (r)/100;
	returnValue=principal;
	for(int i=0;i<y;i++)
	{
		returnValue=returnValue*(1+interest);
	}
}
void BankDeposit::show(){
	cout<<"The principal is "<<principal;
	cout<<". return value after "<<years;
	cout<<" is "<<returnValue<<endl;
}
int main()
{
	BankDeposit bd1,bd2,bd3;
	int p,y;
	float r;
	int R;
	cout<<"Enter p,y,r"<<endl;
	cin>>p>>y>>r;
	bd1=BankDeposit(p,y,r);
	bd1.show();
	
	cout<<"Enter p,y,R"<<endl;
	cin>>p>>y>>R;
	bd1=BankDeposit(p,y,R);
	bd1.show();
	return 0;
}
