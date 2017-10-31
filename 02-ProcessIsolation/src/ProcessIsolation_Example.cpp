/*Berhane Tsegay
Cybersecurity
ProcessIsolation good Example
*/
#include <iostream>
#include <conio.h>
using namespace std;

float getInput(void);
float convert(float f);
void display(float c);

int main()
{
   float fahrenheit;
   float celsius;
   fahrenheit = getInput();
   celsius = convert(fahrenheit);
   display(celsius);
   return 0;
}

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

