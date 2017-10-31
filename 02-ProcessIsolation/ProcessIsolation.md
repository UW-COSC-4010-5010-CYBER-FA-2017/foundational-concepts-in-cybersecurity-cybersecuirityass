



### ProcessIsolation_Example:


float fahrenheit;

float celsius;

fahrenheit = getInput();

celsius = convert(fahrenheit);

display(celsius);

================

float getInput() {

float input;

cout << "Enter Temperature in Degree Fahrenheit" << endl;

cin >> input;

return input; }

float convert(float f) { float c;

c = (f-32.0)*(5.0/9.0);

return c; }

void display(float c)

{ cout << "The Temperature in Celsius is: " << c << endl;

}

### ProcessIsolation_NonExample:
In this bad example. The entire process is done in the main function. 
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
