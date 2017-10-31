
Layering is one of the important principle in cyber security. Designing a software in a protected multi layer form is more secure than a single layer system.

# Layering_Example:
This is a good example of layering. Because every sensitive data is well protected. Even if an attacker is able to access the device, he need to know the password to get access to the Applications and Data in the device.


/================ Snippet========================================/
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



# Layering_NonExample:
This is bad example of Layering. The device consists of some sensitive data and applications. If anybody is able to login to the device, he can do anything with the information in that device as there is only a single layer of protection.


/================ Snippet========================================/
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


====================================================================================

![layering](https://user-images.githubusercontent.com/31521112/32199674-40166adc-bd93-11e7-942f-f20dda44c1a7.JPG)

Source:
https://www.sans.org/reading-room/whitepapers/analyst/layered-security-works-34805
