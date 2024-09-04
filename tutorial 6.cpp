// tutorial 6: c++ header files and operator.
// header file: two types.
//1: systeam header files: it comes with the compiler example: iostream.
//2: user define header files: it is wriitten by programer. eg: this.h
#include<iostream>
using namespace std;
int main()
{
   // 	example of c++ operators
   // following types of operators:
   // exmple of  arithamitic operators: add(+),sub(-),mult(*),division(/),modulus(reminder)%,incremement(post:(a++)pre(++a),decrement:(post(a--)pre(--a)
   cout<<" example of arithmatic operator "<< endl;
   
   int a=4,b=5; // assign value int a and b 
   cout << " the value of a+b is: " << a+b << endl; //  output ofadditon: a+b
   cout << " the value of a-b is: " << a-b << endl; // output of subtraction: a-b
   cout << " the value of a*b is: " << a*b << endl; // output of mutiplication: a*b
   cout << " the value of a/b is: " << a/b << endl; // output of division: a/b // int donot show decimal number so .is kai liyay float ka use karai.
   cout << " the value of a%b is: " << a%b << endl; // output of modulus (reminder): a%b // only use for or with intiger
   cout << " the value of a++ is: " << a++ << endl; // output of postfix increment of a
   cout << " the value of ++a is: " << ++a << endl; // output of prefix increment of a.
   cout << " the value of a-- is: " << a-- << endl; // output of postfix decrement of a.
   cout << " the value of --a is: " << a-b << endl; // output of prefix decrement of a

   // example of asignmeny operator: use to assign value to variable.
   // types: asignmet(=),addition assignment(+=),subtract assignment(-=),multiplies assignment(*=),division assignment(/=),modulus assignment(%=)
      cout<<" example of assignment  operator "<< endl;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a +b
    cout << "a = " << a << endl;

   cout<<" example of comparison operator "<< endl;

  // example of comparison operatoe: equal to(==), not equal to(!=),less than(<),greater than (>),greater than or equal to(>=),less than or equal to(<=).  
  cout << " the value of a==b is: " << (a==b) << endl; // output of equal to
  cout << " the value of a!=b is: " << (a!=b) << endl; //  output of not equal to.
  cout << " the value of a>b is: "  << (a>b) << endl; //  output of greater than
  cout << " the value of a<b is: "  << (a<b) << endl; //  output of less than.
  cout << " the value of a>=b is: " << (a>=b) << endl; //  output of geater than or equal to.
  cout << " the value of a<=b is: " << (a<=b) << endl; //  output of less than.
  
  // example of logical operator
 
   cout<<" example of logical  operator "<< endl;

     bool result;
// and(&&) operator
    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

// or(||) operator
    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

// not(!)operator
    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;

    return 0;

}

