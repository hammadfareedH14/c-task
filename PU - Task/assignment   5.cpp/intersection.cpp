 // find intersection of two arrays(a and b) and store in c. 
 
 #include<iostream>
 #include<cstdlib>
 using namespace std;
 
 int intersection1(int a[], int b[], int c[], int n)
  {
  	int count = 0;
  	for(int i=0;i<=n;i++)
	  {
  	      if(a[i]==b[i])
			{
				cout << "Intersected at: " << i << " with number " << a[i] << endl;
			   	c[i]=a[i];
			   	count += 1;
			}  	
      }
	return count;	  		   
  }
    
 int main()
 {
 	const int size = 9;
 	int result;
 	
 	//array a,b,c.
 	int a[size] = {2,3,4,6,5,7,8,8,20}; 
 	int b[size] = {3,3,4,6,7,8,12,23,40}; 
 	int c[size]; 
 	
 	//srand(11);
 	
 	int x = 0;
 	
// 	for(int i = 0; i < size; i++)
// 	{
//		a[i] = rand();
//	  	b[i] = rand();
//    }

   result = intersection1(a, b, c, size);
   cout << result << endl;
   
   return 0;	
 }
