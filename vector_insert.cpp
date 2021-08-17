#include<bits/stdc++.h>

using namespace std;
void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}

int main()
{ 
	vector<int> vec1;
	int e,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter  the element in vector ";
		cin>>e;
		vec1.push_back(e);
	}
	display(vec1);
	cout<<endl;
	vector<int>::iterator iterat= vec1.begin();
	vec1.insert(iterat,500,9047);
//	vec1.insert(iterat+1,33);
//	vec1.insert(iterat+(n/2),33);
//	vector<int>::iterator iterat= vec1.end();
//	vec1.insert(iterat-1,33);
	display(vec1);
	return 0;
}
