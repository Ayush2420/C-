#include<bits/stdc++.h>
using namespace std ;
typedef int long long ll;
class shop{
	ll id;
	float price;
	public:
		void setdata(ll a,ll b){
			
			id=a;
			price=b-10;
		}
		void getdata(){
			cout<<"After discount"<<endl;
			cout<<"ID0"<<id<<" Gross Price= "<<price<<endl;
		}
		
};
int main()
{
	ll n;
	cin>>n;
	shop *ptr=new shop[n+1] ;
	shop *temp=ptr;
	for(ll i=1;i<n+1;i++){
		cout<<"Enter "<<i<<endl;
	ll a;
	float b;
	cin>>a>>b;
	ptr->setdata(a,b);
	ptr++;
  }
  for(ll i=1;i<n+1;i++){
	temp->getdata();
	temp++;
 }
	return 0;
}
