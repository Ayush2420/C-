#include<bits/stdc++.h>
using namespace std ;
typedef int long long ll;
class com{
	ll real,imaginary;
	public:
		void getdata(){
			cout<<"Real "<<real<<endl;
			cout<<"Imaginary "<<imaginary<<endl;
		}
		void setdata(ll a,ll b){
			real=a;
			imaginary=b;
		}
	
};
int main()
{
//	com x1;
//	com*ptr=&x1;
	com *ptr=new com;
	ptr->setdata(40,7);
	(*ptr).getdata();
	
	com *ptr1=new com[4];
	for(ll i=0;i<4;i++){
	ll a,b;
	cin>>a>>b;
	ptr1->setdata(a,b);
	ptr1->getdata();
 }
	return 0;
}
