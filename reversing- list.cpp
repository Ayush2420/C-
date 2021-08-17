#include<bits/stdc++.h>
using namespace std;

void display(list<int>& lst){
	list<int>::iterator iter;
	for(iter=lst.begin();iter!=lst.end();iter++){
		cout<<*iter<<" ";
	}
	cout<<endl;
}
int main()
{
	list<int> l1;//list of 0 length
	l1.push_back(1);
	l1.push_back(3);
	l1.push_back(8);
	l1.push_back(6);
 
	display(l1);
		//l1.sort();
 		l1.reverse();
	cout<<"The reversed array the is-> ";
	display(l1);										
	
 
	return 0;
}
