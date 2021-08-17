#include<bits/stdc++.h>

using namespace std;
void display(vector<int> &v){
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		
	}
	cout<<endl;
}

int main()
{ int N;
	cin>>N;
	vector<vector<int> > vec1;
	for(int i=0;i<N;i++){
	int e,n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		cout<<"Enter  the element in vector ";
		cin>>e;
		v.push_back(e);
		}
		vec1.push_back(v);
	}	
	for(int i=0;i<N;i++){
		display(vec1[i]);
	}
	
	return 0;
}
