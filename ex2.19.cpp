#include<iostream>
using namespace std;
int main(){
	int i,j,k,smallest,largest;
	cout<<"Input three diferent integers:\n";
	cin>>i>>j>>k;
	cout<<"Sum is : ";
	cout<<i+j+k;
	cout<<endl;
	cout<<"Product is : ";
    cout<<i*j*k;
    cout<<endl;
	cout<<"Average  is : ";
cout<<(i+j+k)/3;
cout<<endl;
	smallest=i;
	if(j<smallest){
		smallest=j;
	}
	if(k<smallest){
		smallest=k;
	}
	cout<<smallest<<" is smallest";
	cout<<endl;
	largest=i;
	if(j>largest){
		largest=j;
	}
	if(k>largest){
		largest=k;
	}
	cout<<largest<<" is largest";
	
	return 0;
}











