/*A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code:
Define the code once, and use it many times.
--------------------------------------------------------------------------------------------------
Create a Function
C++ provides some pre-defined functions, such as main(), which is used to execute code.
But you can also create your own functions to perform certain actions.

To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ():
#include<iostream>
using namespace std;

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
  // No return statement as the function is declared with a return type of void
}

myFunction() is the name of the function
void means that the function does not have a return value.
 You will learn more about return values later in the next chapter
inside the function (the body), add code that defines what the function should do
*/

//------------------------------------------------------------------------------------------------------------------
/*Parameters and Arguments
Information can be passed to functions as a parameter. Parameters act as variables inside the function.
#include<iostream>
using namespace std;


void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

//---------------------------------------------------------------------------------------------------------------------------

Default Parameter Value
You can also use a default parameter value, by using the equals sign (=).

If we call the function without an argument, it uses the default value ("Norway"):


#include<iostream>
using namespace std;


void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}


//------------------------------------------------------------------------------------------------------------------------------
Multiple Parameters
Inside the function, you can add as many parameters as you want:



#include<iostream>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}



*/
//-------------------------------------------------------------------------------------------------------
/*

Return Values
The void keyword, used in the previous examples,
indicates that the function should not return a value.
If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void,
and use the return keyword inside the function:
#include<iostream>
using namespace std;
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}

//----------------------------------------------------------------------------------------------------------------

// Pass By Reference

#include <iostream>
using namespace std;
void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: "
         << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: "
         << "\n";
    cout << firstNum << secondNum << "\n";

    return 0;
}

//----------------------------------------------------------------------------------------------------------

// Pass Arrays as Function Parameters

#include <iostream>
using namespace std;
void myFunction(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }
}

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction(myNumbers);
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
