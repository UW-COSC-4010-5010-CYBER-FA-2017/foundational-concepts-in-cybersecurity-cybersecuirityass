Modularity is dividing a program into separated sub-programs:
## Modularity_Example:
In this good modularity example the process of converting from fahrenheit to celsus program is divided into three sub programs (functions). Getinput, convert and dispaly functions (modules) were developed separately and put together to make a complete process. Each module can be debuged and modified very easly.

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



## Modularity_Non Example:
This is bad example of modularity because the entire conversion program is written inside the main program. Which is not good. Modifying this will completely affect the entire program.

  float f;

 float c;
 
cout << "Enter Temperature in Degree Fahrenheit" << endl;

cin >> f;

c = (f-32.0)*(5.0/9.0);

cout << "The Temperature in Celsius is: " << c << endl;


## Picture Description:

In the figure below, the process of temperature conversion is divided into three separate modules, but all works together to perform complete conversion and display the result.



![modularity](https://user-images.githubusercontent.com/31521112/32199712-612bb768-bd93-11e7-8508-7ecb77b76e03.gif)
