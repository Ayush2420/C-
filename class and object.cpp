#include<iostrem.h>
#include<string>


using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/ 
class stu{
    private:
    int a,s;
    string name;
    string name2;
    public:
    void age(int a1)
    { 
        a=a1;
    }
    void first(string naam)
    {
        name=naam;
        
    }
    void second(string naam2)
    {
        name2=naam2;
    }
    void stan(int s1)
    { 
        s=s1;
    }
     
    int age()
    { 
        return a;
    }
    string first()
    {
        return name;
    }
    string second()
    {
        return name2;
    }
    int stan()
    { 
        return s;
    }
    string tostring()
   {
       stringstream ss;
        ss << a << "," << name << "," << name2 << "," << s;
        return ss.str();
   }
     
};
int main() {
    int a,s;
    string name;
    string name2;
    cin>>a>>name>>name2>>s;
    stu st;
    st.age(a);
    st.first(name);
    st.second(name2);
   st.stan(s);
    
    cout<<st.age() <<endl;
    cout<<st.second() <<","<<st.first() <<endl;
    cout<<st.stan()<<endl;
    cout<<endl;
     cout<<st.tostring();
    
    return 0;
}

