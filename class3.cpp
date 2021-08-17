#include<bits/stdc++.h>
using namespace std;
class binary{
	string s;
	public:
		void read();
		void chk();
		void cha();
};
void binary::read()
{
	cout<<"Enter"<<endl;
	cin>>s;
	
}
void binary::chk()
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='0' && s[i]!='1')
		{
			cout<<"wrong"<<endl;
		}
		else{
			cout<<"binary"<<endl;
		}
	}
}
void binary::cha()
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			s[i]='0';
		}
		else
		{
			s[i]='1';
		}
	}
	for(int i=0;i<s.length();i++)
	{
		cout<<s[i];
	}
}

int main()
{
	binary b;
	b.read();
	//b.chk();
	b.cha();
	return 0;
}
