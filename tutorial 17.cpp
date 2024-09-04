// tutorial 17: inline function,default argument,constant argument. 
#include<iostream>
using namespace std;

    // inline function.
    // inline aik request hoti ha chayey compiler accept ya reject karai.
    int product(int a, int b)  // jab static vraiable and switch and loop mai. use ho to inline ka use na karai.//only use simple function
    {
//    	static int c = 0; //this execute only once (mean one time initilize)
//    	c = c + 1; // next time this function is run,the value of c will be retained.
//       return a*b + c;	
       return a*b;
	}
	
	float moneyrecieved(int currentmoney, float factor=1.04)  // default value: second argument, first argument is default, 
	  {
	  	return currentmoney*factor;
	  }
	  
	  
	int main()       
	{
//		int a,b;
		int money = 100000;
//		cout << "enter the value of a nad b: ";
//		cin  >> a >> b;
		
		//cout << "the value of a and b: " << product(a,b) << endl;
		cout << "if you have " << money <<"RS in your bank account, you will recieve " << moneyrecieved (money) <<"RS after one year " << endl;
		cout <<" for vip: if you have " << money <<"RS in your bank account, you will recieve " << moneyrecieved (money,1.1) <<"RS after one year " << endl;		
	}
