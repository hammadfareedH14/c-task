 #include<iostream>
 using namespace std;
 
 int main ()
 {
   int n,sum=0;
   cout << "enter the value of n " << endl;
   cin >> n;
   for(int i=1;i<=n;i++)
   {
     sum+=i;	
   }
   cout << "the sum of 1 to n is: " << sum << endl;	
 }
