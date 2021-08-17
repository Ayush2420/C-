#include<bits/stdc++.h>

using namespace std;

class base{
	protected:
		int a=9;
		private:
			int b;
};
class derived: protected base{
	public:
		int c;
		a=c;
};

int main()
{
	base b;
	derived d;
	cout<<d.;
	return 0;
}
