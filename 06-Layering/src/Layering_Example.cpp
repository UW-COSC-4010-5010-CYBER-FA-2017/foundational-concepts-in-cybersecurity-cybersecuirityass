
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

// password protected applications
void Applications::ApplicationSoftware()
{
string pswd;
cout<<"Enter Password to get access to this App:" << endl;
cin>> pswd;
 if(pswd == "softwarepwd")
 {
     cout << "\n === Enjoy using these Apps!===\n" << endl;
    }
    else {
        cout << "Authentication Failed!" << endl;
    }
}

// Protected sensitive data
void Applications::SensitiveData()
{
string pswd,username;
cout<<"Enter user name and Password to get access to Data:" << endl;
cin>> pswd >>username;
 if(pswd == "datapwd"&& username =="trusteduser")
 {
     cout << "\n === Now you can play with these Data!===\n" << endl;
    }
    else {
        cout << "Authentication Failed!" << endl;
    }

}
