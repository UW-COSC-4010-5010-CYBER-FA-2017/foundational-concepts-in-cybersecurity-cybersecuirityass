

Process Isolation one of the basic principles to keep your system secure. Because keeping processes separate prevents the failure of one process from negatively impacting another.

### ProcessIsolation_Example:
In this good example. The process of conversion temperature is done in three different and separate functions.
In the getInput function, where the user enters the temperature value he wants to convert to celsius, the input goes through validity check first. If the user enters invalid input, he will be given a second chance to correct it and the program will not crash.

float fahrenheit;

float celsius;

fahrenheit = getInput();

celsius = convert(fahrenheit);

display(celsius);

================

float getInput()

{
float input;

cout << "Enter Temperature in Degree Fahrenheit" << endl;

cin >> input;

// For validity of input

//Invalid input don't crash the program give him second chance

    while (!cin) {
    
        cout << "\n ERROR, Invalid Input !! Please Enter valid Temperature" << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> input;
    }

return input;

}

float convert(float f)

{
float c;

c = (f-32.0)*(5.0/9.0);

return c;
}

void display(float c)

{

   cout << "The Temperature in Celsius is: " << c << endl;
}

### ProcessIsolation_NonExample:
In this bad example. The entire process is done in the main function. So if the user enters invalid input the entire program crashes.

float f;

float c;

cout << "Enter Temperature in Degree Fahrenheit" << endl;

cin >> f;

c = (f-32.0)*(5.0/9.0);

cout << "The Temperature in Celsius is: " << c << endl;

### Picture Description:

In the image below, each application or container is isolated from the other. It is good practice to isolate processes from each other to minimize exploitation. 


![processisolation](https://user-images.githubusercontent.com/31521112/32200338-bd90d166-bd96-11e7-891d-7085e299bcfa.png)


Source:
https://www.google.com/search?q=process+isolation&safe=active&source=lnms&tbm=isch&sa=X&ved=0ahUKEwjwitrrvZnXAhVpzIMKHQWxAiYQ_AUICigB&biw=1680&bih=910#imgrc=SJvf9bG0plGBiM:
