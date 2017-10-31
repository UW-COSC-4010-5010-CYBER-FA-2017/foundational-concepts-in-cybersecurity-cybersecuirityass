
A program should be very concise. If it is very long that involves many variables and functions, then it will be difficult to protect it.

## Minimization_Example:
This is good example of minimization. The operation is performed within a few lines of codes with minimum variables. 

float x;             //variable to find ln of it

   //======User Input=====
   
   cout << "Enter the number you want to find its natural logarithm:" << endl;
   
   cin >> x;
   
  //Get result using library function log(x)
  
   cout << "ln("<< x << ") using C++ function is= " << log(x) << endl;

## Minimization_NonExample:
This is bad example of minimization. The operation is performed using a complex logic which requires more variables and memory space. This program can be exploited.

// function to find lnx in a more complex way

float ComputelogXcomplex(float x,int precision)

{

 float logX;
 
 float Diff=0.0;
 
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









### Picture Description:
If a process is designed at its possible minimum form, it is easy to manage it.

![minimization](https://user-images.githubusercontent.com/31521112/32209401-bbc058e8-bdcd-11e7-881f-9acff53d2e4a.JPG)


source: 
https://www.google.com/search?q=minimization&safe=active&source=lnms&tbm=isch&sa=X&ved=0ahUKEwj4rJDhlZrXAhUl4YMKHTVlDekQ_AUICigB&biw=1680&bih=910#imgrc=4LQ_JpaZ8f659M:
