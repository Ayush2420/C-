#include<bits/stdc++.h>

using namespace std;
template<class T>
void display(vector<T> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main()
{ 
	vector<int> vec1;
	vector<char> vec2(4);
	vec2.push_back('A');
	display(vec2);
	vector<char> vec3(vec2);
	display(vec3);
	vector<int>vec4(6,47);
	display(vec4);


	return 0;
}
