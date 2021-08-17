#include <iostream>
using namespace std;

class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a,int b,int c);   //declaration
    void getdata(){
        cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
    }
};
void Employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    Employee Ayush;
    Ayush.d=d;
    Ayush.e=e;
    Ayush.setdata(a,b,c);
    Ayush.getdata();
    
	// your code goes here
	return 0;
}
