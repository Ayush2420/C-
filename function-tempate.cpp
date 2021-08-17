#include<bits/stdc++.h>
using namespace std;
template<class T1,class T2>
float fun(T1 a,T2 b){
	return (a+b)/2;
}
int main()
{
	float a,b;
	cin>>a>>b;
	cout<<fun(a,b)<<endl;
	swap(a,b);
	cout<<a<<" "<<b;
	return 0;
}
