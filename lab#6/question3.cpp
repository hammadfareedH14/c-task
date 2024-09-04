// four area of circle,triangle,rectangle,square.
// header file. 
#include<iostream>
#include<math.h>
// stander namespace 
using namespace std;
int main() 
{
 // declare variale	
  float a, b, c, s, radius, area;
  int choice;
  // choice for user prompt to input.
  cout << "Press 1 for Area of a Triangle";
  cout << "\nPress 2 for Area Of Square";
  cout << "\nPress 3 for Area Of Circle ";
  cout << "\nPress 4 for Area Of Rectangle\n";
  cout << "\nEnter Your Choice :";
  // input 
  cin >> choice;
  // switch staement  
   switch (choice) 
{
  case 1: 
{
    cout << "\nEnter Base and Height of Triangle: " << endl;
    cin >> a >> b;
    area = (a*b) / 2 ; 
    cout << "Area of Triangle = " << area << endl;
    break;
}
  case 2: 
{
    cout << "Enter the Side Of Square: " <<endl;
    cin >> a;
    area = a * a;
    cout << "Area of Square = " << area << endl;
    break;
}
  case 3: 
{
    cout << "Enter the Radius of Circle: " << endl;
    cin >> radius;
    area = 3.14159 * radius * radius;
    cout << "Area of Circle = " << area << endl;
    break;
}
  case 4: 
{
    cout << "Enter the Length and Width of Rectangle: " <<endl;
    cin >> a >> b;
    area = a * b;
    cout << "Area Of Rectangle = " << area << endl;
    break;
}
  default:
    cout << "Invalid Choice!!! Choose Between 1 to 4" <<endl;
    break;
}
  return 0;
}
