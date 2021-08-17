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
	l1.push_back(4);
	l1.push_back(6);
	
	display(l1);
	l1.pop_back();
	//l1.pop_front();
	//l1.remove(4);
	display(l1);
	
	list<int> l2(3);//empty list of 7 length;
	list<int>::iterator it;
	it=l2.begin();
	*it=0;
	it++;
	*it=3;
	it++;
	*it=4;
	it++;
	cout<<endl;
		display(l2);													
	
 
	return 0;
}
