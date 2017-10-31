Least Privilege is to give a user a minimum permission.
### LeastPrivilege_Example: 
This is good example of least privilege. The two users in the in this example (firstuser and seconduser) have different permissions within the class. 
### LeastPrivilege_NonExample: 
This is bad example of least privilege. Because all the users have access to all the functions in all the classes.

class Customer
{
	public:
	    float balance;
		values transfermoney();
		void deposit();
		void info();
        Admin* admin_p; // pointer of class Admin to be used for giving the customer access to the Admin Functions

};
 using the above admin_p pointer the functions in the admin class can be accessed by all users.Besides all the users are given equal access to all available processes.
 if(username =="firstuser") {
   cout << " \n You have the permission to transfer and deposit money: " << endl;
   detl = user.transfermoney();
    user.deposit();
   }
  The second user is also given similar permission, which is not good.

### Picture Description:
I think the image is self explanatory, but to make it clear the person asking for permission to get access to the machine. So users must be able to access only the necessary information.








![least privilege](https://user-images.githubusercontent.com/31521112/32199588-d2c2a1d0-bd92-11e7-9154-ffda70f8470c.jpg)

Source:
https://www.google.com/search?q=least+privilege&safe=active&source=lnms&tbm=isch&sa=X&ved=0ahUKEwj1sbGAvZnXAhVCwYMKHZn9Bd4Q_AUICygC&biw=1680&bih=910#imgrc=5pCC7ur0LYuiAM:
