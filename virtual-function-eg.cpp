#include<bits/stdc++.h>

using namespace std;

class CWA{
	protected:
		string title;
		float rating;
	public:
		CWA(string s,float r){
			title=s;
			rating=r;
		}
		virtual void display(){
			
		}
};

class CWAvideo:public CWA{
	int videolen;
	public:
		CWAvideo(float vl,string s,float r):CWA(s,r){
			videolen=vl;
		}
		void display(){
			cout<<"This video is amazing "<<endl<<"Ratings "<<rating<<"/5"<<endl;
			cout<<"The video Length "<<videolen<<endl;
		}
	
	

};
class CWAtext:public CWA{
	int word;
	public:
		CWAtext(int wc,string s,float r):CWA(s,r){
			word=wc;
			
		}
		void display(){
			cout<<"This video is amazing "<<endl<<"Ratings "<<rating<<"/5"<<endl;
			cout<<"NO. of word "<<word<<endl;
		}
};
int main(){
	char *title=new char[30];
	float rating;
	float videolen;
	int word;
	
	cin>>title;
	cin>>videolen;
	cin>>rating;
	cin>>word;
	
	CWAvideo djvideo(videolen,title,rating);
		djvideo.display();
		
		CWAtext djtext(word,title,rating);
		
		djtext.display();
		
	CWA* file[2];
	file[0]=&djvideo;
	file[1]=&djtext;
	
	file[0]->display();
	file[1]->display();
	
	return 0;
}
