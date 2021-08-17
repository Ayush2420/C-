#include<bits/stdc++.h>
using namespace std;

class student{
	protected:
		int roll;
	public:
		void setno(int a)
		{
			roll=a;
		}
		void print(){
			cout<<"ROLL "<<roll<<endl;
		}
};
class test:virtual public student{
	protected:
		int	maths,physics;
	public:
		void setmarks(int a,int b){
			maths=a;
			physics=b;
		}
		void printmarks(){
			cout<<"Marksheet"<<endl<<"Maths -> "<<maths<<endl<<"Physics -> "<<physics<<endl;
		}
	
};
class sports:virtual public student{
	protected:
		float score;
	public:
		void setscore(float a){
			score=a;
		}
		void printscore(){
			cout<<"Your PT score"<<score<<endl;
		}
};
class result:public test,public sports{
	private:
		float total;
	public:
		void printresult(){
			total=maths+physics+score;
			print();
			printmarks();
			printscore();
			cout<<"Total marks "<<total<<endl;
			if(total>=120){
				cout<<"Pass"<<endl;
			}
			else{
				cout<<"Fail"<<endl;
			}
		}
};
int main()
{
	result r1;
	r1.setno(47);
	r1.setmarks(85,59);
	r1.setscore(90);
	r1.printresult();
	
	return 0;
}
