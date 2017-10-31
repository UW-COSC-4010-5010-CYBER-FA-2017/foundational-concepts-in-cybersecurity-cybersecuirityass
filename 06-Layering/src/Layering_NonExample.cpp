
/*  Berhane Tsegay
Cyber Security
Layering Non Examplar

*/

/*  Berhane Tsegay
Cyber Security
Layering Examplar
*/
#include<iostream>
#include<string>
using namespace std;

class user;

// Applications class definition
class Applications
{
	public:
	    void Device(Applications user);
		void ApplicationSoftware();
		void SensitiveData();
};

// User class definition
class User
{

public:
void userActivity()
{
    string pwd;
    cout << "Please Enter the password to get Access to this Device" << endl;
    cin>> pwd;
    if(pwd == "devicepwd")
 {
     Applications user;
     user.Device(user);
    }
    else {
        cout << "Authentication Failed!" << endl;
    }


}

};


int main()
{
    User obj;
    obj.userActivity();

}

// User Device Content
void Applications::Device(Applications user)

{
string selection;
cout << "\n This device contains some Application Software and Data " << endl;
cout << "Enter S to open the Applications and D to get access to the data" << endl;
cin >> selection;

if(selection=="S"|| selection=="s"){
    user.ApplicationSoftware();
}
else if(selection=="D"|| selection=="d"){
    user.SensitiveData();
} else {
cout << " Invalid choice" << endl;
}
}

// unprotected applications
void Applications::ApplicationSoftware()
{

     cout << "\n === Enjoy using these Apps!===\n" << endl;


}

// UnProtected sensitive data
void Applications::SensitiveData()
{

     cout << "\n === Now you can play with these Data!===\n" << endl;



}
