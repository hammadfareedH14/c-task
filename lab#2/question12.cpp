 #include<iostream>
 using namespace std;
 
 int main ()
 {
   int n,mul=1;
   cout << "enter the value of n " << endl;
   cin >> n;
   for(int i=1;i<=n;i++)
   {
     mul*=i;	
   }
   cout << "the sum of 1 to n is: " << mul << endl;	
 }
