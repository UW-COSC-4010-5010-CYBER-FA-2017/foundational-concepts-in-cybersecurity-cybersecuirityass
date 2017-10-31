

## DataHiding_NonExample:

    This is a good example of data hiding because some of the information are unavailable to the other classes.
    In this example the function transfer money is set to private which is inaccessible from the outside world. 
    This is a good practice of preventing hackers from exploiting the program.
    
  
    class Customer
{

    public:
  
	    float balance;
      
		void deposit();
    
		void info();
    
	private:
  
        values transfermoney();
};





## DataHiding_NonExample:

    This is a bad example of data hiding because all the functions are able to be seen by all classes.
    Being able to see all information allows a potential hacker to have a starting point
    to find an exploit.

 class Customer
{

    public:
  
	    float balance;
      
		void deposit();
    
		void info();
		
           values transfermoney();
	private:
  
       
};






The Picture is self explanatory.

![datahiding](https://user-images.githubusercontent.com/31521112/32199856-25b1de5a-bd94-11e7-90e3-f252bd8f1e8a.jpg)

Source:
https://www.google.com/search?q=data+hiding&safe=active&source=lnms&tbm=isch&sa=X&ved=0ahUKEwix34HhvJnXAhUD5YMKHTc1DtgQ_AUICygC&biw=1680&bih=910#imgdii=HaXnLYBTNvpNIM:&imgrc=wmeA4cRWmrkdaM:
