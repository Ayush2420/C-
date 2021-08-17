#include <bits/stdc++.h>

using namespace std;

void rotation(int arr[],int n,int d)
{int i;
     long long int temp=arr[0];
    for(i=1;i<n;i++){
        arr[i-1]=arr[i];}
    arr[n-1]=temp;

//    	int temp=v[0];
//	for(int i=0;i<v.size();i++){
//		v[i-1]=v[i];
//	}
//	v[v.size()-1]=temp;
    
}
int main(){
    long long int n,d,i;
    cin>>n;
    int arr[n+1];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   rotation(arr,n,d);
   for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
