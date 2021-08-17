#include<bits/stdc++.h>
using namespace std;
class calculator{
	protected:
		int a,b,res;
	public:
		/*calculator(){}
		calculator(int a,int b){
			a=a1;
			b=b1;
		}*/
		void cal(int a,int b){
			char ch;
			cout<<"Options '+'or'-'or'/'or'*'"<<endl;
			cin>>ch;
			switch(ch){
				case '+':res=a+b;
						break;
				case '-':res=a-b;
						break;
				case '/':res=a/b;
						break;
				case '*':res=a*b;
						break;
				
			}
		//	cout<<res endl;
		}
};
class scientificCalculator{
	protected:
		int a1,res1;
	public:
	/*	scientificCalculator(){}
		scientificCalculator(int a1){
			a1=a1;
		}*/
		
		void cal1(int a1){
			int n;
			cout<<"Options 1-sin,2-cos,3-tan"<<endl;
			cin>>n;
			switch(n){
				case '1':res1=sin(a1);
						break;
				case '-':res1=cos(a1);
						break;
				case '/':res1=cos(a1);
						break;
				
			}
		//	cout<<res endl;
		}
		
};
class result:public calculator,public scientificCalculator{
	public:
		void display(){
			cout<<"Ans "<<res<<endl;
			cout<<"Ans "<<res1<<endl;
			
		}
};
int main(){
	int a,b;
	cout<<"Enter "<<endl;
	cin>>a>>b;
	result r1;
	r1.cal(a,b);
	r1.display();
	r1.cal1(a);
	r1.display();
	
	return 0;
}
