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
	l1.push_back(4);
	l1.push_back(3);
	l1.push_back(6);
	display(l1);
	
	list<int> l2(3);
	list<int>::iterator it;
	it=l2.begin();
	*it=9;
	it++;
	*it=14;
	it++;
	*it=13;
	it++;
		display(l2);
		
		cout<<endl;
 	l1.sort();
 	l2.sort();
	l1.merge(l2);
	cout<<"After merging the list-> ";
	display(l1);													
	
 
	return 0;
}
