#include<bits/stdc++.h>

using namespace std;
template <class T>
class Vector{
	
	public:
		T *arr;
		int size;
		Vector(int m){
			size=m;
			arr=new T[size];
		}
		
		T sum(Vector &v){
			T d=0;
			for(int i=0;i<size;i++){
				d+=this->arr[i]+v.arr[i];
				
			}
			return d;
		}
};
int main()
{
//	Vector v1(3);
//	v1.arr[0]=4;
//	v1.arr[1]=1;
//	v1.arr[2]=3;
//	Vector v2(3);
//	v2.arr[0]=1;
//	v2.arr[1]=0;
//	v2.arr[2]=2;
//	int a=v1.sum(v2);
//	cout<<a;

	Vector <float> v1(3);
	v1.arr[0]=4.5;
	v1.arr[1]=0.1;
	v1.arr[2]=3.3;
	Vector <float> v2(3);
	v2.arr[0]=1,1;
	v2.arr[1]=0.7;
	v2.arr[2]=2.5;
	float a=v1.sum(v2);
	cout<<a;
	return 0;
}
