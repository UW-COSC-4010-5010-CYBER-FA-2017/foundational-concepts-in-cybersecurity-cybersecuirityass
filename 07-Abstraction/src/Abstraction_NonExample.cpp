/*  Berhane Tsegay
Cyber Security
Abstraction Non Examplar
*/
#include<iostream>
#include<string>
using namespace std;
struct values
{
    long acc;
    float amt;
    long atr;
    float balance;
    string name;
};

class Admin;

// Customer class starts here
class Customer
{
	public:
	    float balance;
		values transfermoney();
		void deposit();
		void info();
        Admin* admin_p; // pointer of class Admin to be used for giving the customer access to the Admin Functions

};

// Admin class starts here
class Admin
{

public:
void AccDetails()
{
string username;
    cout << "Enter Login Information: " << endl;
    cin>> username;
    if(username=="Admin"|| username == "admin") // // If admin give him access to all the user Details.
    {
    cout << "Hey Admin now you can access the Customer information: "<< endl;
    Customer custm;
    values money;
     money = custm.transfermoney(); // method to transfer money
     custm.deposit(); // method to deposit money
    }
     else {
        cout << "Invalid username!! Sorry you are not ADMIN!" << endl;
        cout << "==========Please try again as a user if you are a user=========!" << endl;
        Customer cum;
        cum.info();
     }

}
void adminOnly()
{
    values detl;
    Customer user;
    int choice;
   cout << "!==Sensitive information Admin only has to see this==!" << endl;
   cout << "Enter the operation to perform: " << endl;
   cout << "1: To Transfer money: " << endl;
    cout << "2: To Deposit: " << endl;
    cin >> choice;
    if(choice ==1) {
   detl = user.transfermoney();
   }
    else if(choice ==2)
    {
        user.deposit();
	}
  else {
        cout<< "Invalid username "<< endl;
    }
}
};
// This function is used for the customer authentication
void Customer:: info(){
    string username;
    values detl;
	Customer user;
    cout << "Enter user login info: " << endl;
    cin >> username;
    if(username =="firstuser") {
   cout << "\n NB: You can only transfer money with this account: " << endl;
   detl = user.transfermoney();
   }
    else if(username =="seconduser")
    {
        cout << "\n NB: You can only deposit with this account: " << endl;
       user.deposit();

	}
  else {
        cout<< "Invalid username "<< endl;
    }
}


int main()
{
    Admin obj;
    obj.AccDetails();
    Customer cum;
    cum.admin_p = &obj;
    cum.admin_p->adminOnly();

}

// Customer Detail functions goes here
// function which performs money transfer
values Customer::transfermoney()

{
 cout << "\n===Transaction Details===="<< endl;
   float balance = 500.00;
	float amt;
	long atr, acc;
	cout << "Enter the Account number you want to transfer money from: "<< endl;
	cin>>acc;
	cout<<"Enter amount to be transferred & the account number to transfer to: "<< endl;
	cin>>amt>>atr;

	if(balance<amt)
	{
		cout<<"\n Insufficient balance! Operation Cannot be performed!"<<endl;
	}
	else
	{
		balance = balance-amt;
		cout<< amt << " has been transferred from Acc.No " << acc << " to Acc.No " << atr<< " successfully! "<<endl;
        cout<<  " Now your new balance in " << acc <<" is: " << balance <<endl;
	}
	values v ={acc, amt,atr,balance};
	return v;
}

// function which performs money deposit
void Customer::deposit()
{
	cout << "====Deposit Details===="<< endl;
	float depo;
	long account;
	cout << "Enter the Account number you want to deposit: "<< endl;
	cin>>account;
	cout<<"Enter amount to be deposited: "<< endl;
	cin>>depo;
	cout<< depo << " has been deposited to " << account << " successfully! "<<endl;

}
