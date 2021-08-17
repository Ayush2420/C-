#include<bits/stdc++.h>

using namespace std;
void display(vector<int> &v){
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		
	}
//	cout<<endl<<v.size();
}

int main()
{ int N;
	cin>>N;
	vector<int> vec1[N];
	for(int i=0;i<N;i++){
		int e;
		cin>>e;
		vec1[i].push_back(N);
//	int e,n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cout<<"Enter  the element in vector ";
//		cin>>e;
//		vec1[i].push_back(e);
//		}
	}	
	for(int i=0;i<N;i++){
		display(vec1[i]);
	}
	
	return 0;
}
