
Simple program is oftn times the most secure one. So Simplicity is a very important principle in cyber security.

# Simplicity_Example:
This program calculates the natural logarithm of a variable (lnx) using the built in C++ library function. Hence the operation can be performed in two lines code.

int main()
{

    float x;             //variable to find ln of it
   //======User Input=====
 
        cout << "Enter the number you want to find its natural logarithm:" << endl;
       cin >> x;
     //Get result using library function log(x)
   
       cout << "ln("<< x << ") using C++ function is= " << log(x) << endl;
   }

# Simplicity_NonExample:
The same operation was performed using different appraoch called the Tayler series. This computation was implemented in this example in two different functions. The first one is more complex than the second one. Because it involved many variables and complicated logic. While the second one which is a little bit simpler uses the library function pow() to compute power of a number, but still it is not in its simplest form. Both those functions require many variables which are available to the outside world which is not good.

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








### Picture Description:
The Picture represents the difference between distance and displacemet. Which is similar to complex and simple program.


![simplicity](https://user-images.githubusercontent.com/31521112/32199962-befeca50-bd94-11e7-8143-8bf0d733de54.PNG)

Source:
https://www.google.com/search?q=displacement+vs+distance&safe=active&source=lnms&tbm=isch&sa=X&ved=0ahUKEwjv4JDnv5nXAhUq5oMKHZcaC8oQ_AUICigB&biw=1680&bih=910#imgrc=XjSEe2SBeNHHHM:
