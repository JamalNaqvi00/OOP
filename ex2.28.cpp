#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<"Enter 5 Digit integer:\n";
	cin>>i;
	cout<<i/10000<<"   ";
	i=i%10000;
	cout<<i/1000<<"   ";
	i=i%1000;
	cout<<i/100<<"   ";
	i=i%100;
	cout<<i/10<<"   ";
	i=i%10;
	cout<<i/1<<"   ";
	
	
	return 0;
}




