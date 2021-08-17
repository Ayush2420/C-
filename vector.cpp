#include<bits/stdc++.h>

using namespace std;
void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		
	}
	cout<<endl<<v.size()<<endl;
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
    
//	for(int i=0;i<vec1.size();i++){
//		cout<<vec1[i]<<" ";
//	}
	return 0;
}
