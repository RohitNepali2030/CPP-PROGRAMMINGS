#include<iostream>

using namespace std;

class Bank_Account
{
	private:
		char Accountname[200], Accounttype[200];
		
		
		int Accountnumber;
		
		float balance;
		
		public:
			void inputCustomerData()
			{
				cout<<"Enter Account Name :"<<endl;
				cin>>Accountname;
				
				cout<<"Enter Account Number : "<<endl;
				
				cin>>Accountnumber;
				
				cout<<"Enter Account Type :"<<endl;
				
				cin>>Accounttype;
				
			}




void deposit()
{
	float amt;
	
	cout<<"Enter Amount to Deposit"<<endl;
	cin>>amt;
	
		BALANCE = balance + amt;
	
}

void withdraw()
{
	float amt;
	
	cout<<"Enter Amount to Withdraw : "<<endl;
	
	cin>>amt;
	
if(balance>= amt)

	{	
	BALANCE = balance - amt;
	
	cout<<"Amount Withdrawn Successfully"<<endl;
	
	}

else
	{	
	cout<<"Not Enough Balance"<<endl;
	
	}
}

	void displayCustomerData()
	{
		cout<<"Name : "<<Accountname<<endl;
		cout<<"Balance : "<<balance<<endl;
		
	}
	
}b;

int main()
	{	
	
	Bank_Account b;
	b.inputCustomerData();
	b.deposit();
	b.withdraw();
	b.displayCustomerData();
	
		return 0;
	}
