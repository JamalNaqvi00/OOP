#include<iostream>
#include<string>
using namespace std;
class E5_Bank{
	public:
	int balance;
	E5_Bank(int a){
		cout<<"Welcome to E5 Bank"<<endl;
		balance=a;
		menu();
	}
	
	checkbalance(){
		cout<<"Your Current Account Balance is :"<<balance<<endl;
		menu();
	}
	withdraw(){
		int a;
		cout<<"Enter Your Withdraw Amount"<<endl;
		cin>>a;
		if(a>=500 && a<=25000){
		
		 balance=balance-a;
		 cout<<"You Withdraw "<<a<<" From YOur Account"<<endl;
	menu();}
	else{
		cout<<"Please Enter Amount Between 500 to 25000"<<endl;
	withdraw();
	}
	}
	deposit(){
		int a;
		cout<<"Enter Your Deposit Amount"<<endl;
		cin>>a;
		if(a>=500 && a<=500000){
		
		balance=balance+a;
		cout<<"You Deposited "<<a<<"To Your Account"<<endl;
		menu();}
		else{
			cout<<"Please Deposit Amount Betwen 500 to 5 lakh"<<endl;
		}
	}
	
	

menu(){
	int a;
	cout<<"Please Enter 1 For Check Balance"<<endl;	
	cout<<"Please Enter 2 For Withdraw "<<endl;	
	cout<<"Please Enter 3 For Deposit "<<endl;	
cin>>a;
if(a==1){
	checkbalance();
	
}
else if(a==2){
	withdraw();
}
else if (a==3){
	deposit();
}

else{
	cout<<"Please Enter Valid Input: "<<endl;
	menu();
}
}};

main(){
	E5_Bank acc(10000);
	

}























