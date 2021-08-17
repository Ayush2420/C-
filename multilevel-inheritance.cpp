#include<bits/stdc++.h>
using namespace std;
class student{
	protected:
		int roll;
	public:
		void setroll(int);
		void getroll();
		
		
};
void student::setroll(int r)
{
	roll=r;
}
void student::getroll()
{
	cout<<"Roll "<<roll<<endl;
}
class exam:public student{
	protected:
		float maths;
		float physics;
		public:
			void setmarks(float m,float p){
				maths=m;
				physics=p;
			}
			void getmarks(){
				cout<<"MATHS "<<maths<<endl;
				cout<<"PHYSICS "<<physics<<endl;
			}
};
class result:public exam{
	float per;
	public:
		void display(){
			getroll();
			getmarks();
			cout<<"Your perc entage% "<<(maths+physics)/2<<endl;
		}
};
int main()
{
	 result ayush;
	ayush.setroll(47);
	ayush.setmarks(92,89);
	ayush.display();
	return 0;
}
