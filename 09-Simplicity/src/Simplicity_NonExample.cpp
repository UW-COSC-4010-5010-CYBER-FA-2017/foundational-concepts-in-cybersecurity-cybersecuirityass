/* Berhane Tsegay
Cyber Security
Simplicity bad Example
*/
#include <iostream>
#include <cmath>
using namespace std;


float ComputelogXcomplex(float x,int precision);
float ComputelogXsimpler(float x,int precision);

int main()
{

   int precision;     //The the highest order of polynomial for precision.
   float x;             //variable to find ln of it using Tayler series.
   float logx =0.0, lnx= 0.0;
   //======User Input=====
   cout << "Enter the order of Precision:" << endl;
   cin >> precision;
   cout << "Enter a number b/w 0 and 2 to find its natural logarithm:" << endl;
   cin >> x;
check:
    if(x>0&& x<=2)
{
  //Get actual value using library function log(x)
   cout << "ln("<< x << ") using C++ function is= " << log(x) << endl;
   // Get the result using taylor series
   logx = ComputelogXcomplex(x, precision);
   cout << "\n(Complex) The value of ln(" << x << ") using tayler series of order "<< precision<< " is: "<< logx <<endl;
  lnx = ComputelogXcomplex(x, precision);
   cout << "(Simpler) The value of ln(" << x << ") using tayler series of order "<< precision<< " is: "<< lnx <<endl;
}
else {
    cout << "Please Enter a floating point number between 0 and 2" << endl;
     cin >> x;
     goto check;
}

   }
// function to find lnx in a more complex way
float ComputelogXcomplex(float x,int precision)
{

 float logX;
	float Diff=0.0;;
	float OneRaisedToN;
	float Temp;
   OneRaisedToN = 1.0;
   Diff = Temp = x - 1;
   logX = OneRaisedToN*Diff;

		for (int n = 2;n <= precision;n++)
		{
			OneRaisedToN = -OneRaisedToN;
			Diff *= Temp;
			logX += (OneRaisedToN / n)*Diff;
      //logX+= (pow(-1,n+1)*pow((x-1),n))/n;
		}
		return logX;
	}
// function to find lnx in a simpler way but still it is not simple enough
float ComputelogXsimpler(float x,int precision)
{

 float logX = x-1;

		for (int n = 2;n <= precision;n++)
		{

      logX+= (pow(-1,n+1)*pow((x-1),n))/n;
		}
		return logX;
	}
