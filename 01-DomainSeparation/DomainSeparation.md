Domain Separation :

Separating areas where resources are located prevents accidents and loss of data, keeping information from colliding.
## DomainSeparation_Example:
In this example Admin has access to all the customer (user) information. while the users have only permission to specific operations only.
There are two users in the program, the firstuser has permission to the transfermoney function only and similarly the seconduser has permission to deposit function. Eventhough, this is not a realtime situation, I just wrote it like that for the sake of demonstration.

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
		cout << "=========================================!" << endl;
     }
}
## DomainSeparation_Non Example:
In this bad example, by defining a pointer admin_p of class admin in the customer class. Any user from the customer class now can access the function adminonly in the admin class which was inaccessible before from the customer class before and also unlike the good example, every user has now permission to every function in the customer class. part of the code where the domain separation fails is shown below:

class Customer
{

	public:
	    float balance;
		values transfermoney();
		void deposit();
		void info();
        Admin* admin_p; // pointer of class Admin to be used for giving the customer access to the Admin Functions

};

int main()
{

    Admin obj;
    obj.AccDetails();
    Customer cum;
    cum.info();
    cum.admin_p = &obj;
    cum.admin_p->adminOnly();

}

## Picture Description:
Members of a domain only see the data contained within their domain or the child domains that are lower in the domain hierarchy. The global domain has access to all the domains/data under him.

![domainseparation](https://user-images.githubusercontent.com/31521112/32199262-653ad278-bd91-11e7-9782-839b34a38fe4.gif)

Source:
https://www.google.com/search?q=domain+separation&safe=active&source=lnms&tbm=isch&sa=X&ved=0ahUKEwiJyOvFvZnXAhUL74MKHdUjBQYQ_AUICigB&biw=1680&bih=910#imgrc=PYMr4ntYax8HJM:
