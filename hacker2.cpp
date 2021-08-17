#include<bits/stdc++.h>
using namespace std;
int check(string username){
	int isvalid=true;
	int i;
	int n=username.length();
	if(n<5){
		cout<<"Two short: "<<n<<endl;
	}
	else{
		for(i=0;i<n-1;i++){
			if(username[i]=='w'&&username[i+1]=='w')
			   isvalid=false;
		}
		if(isvalid){
			cout<<"Valid"<<endl;
		}
		else{
			cout<<"Invalid"<<endl;
		}
	}
		
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string username;
		cin>>username;
		check(username);
	
	}
}
