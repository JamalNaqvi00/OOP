#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,smallest,largest;
	cout<<"Write 5 integers\n";
	cin>>a>>b>>c>>d>>e;
	smallest=a;
	if(b<smallest){
		smallest=b;
	}
	if(c<smallest){
		smallest=c;
	}
	if(d<smallest){
		smallest=d;
	}
	if(e<smallest){
		smallest=e;
	}
	largest=a;
	if(b>largest){
		largest=b;
	}
	if(c>largest){
		largest=c;
	}
	if(d>largest){
		largest=d;
	}
	if(e>largest){
		largest=e;
	}
	cout<<"smallest is"<<smallest<<endl;;
	cout<<"largest is"<<largest;
	return 0;
}


































































































