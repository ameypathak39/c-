/*C++ Loops
Loops can execute a block of code as long as a specified condition is reached.

Loops are handy because they save time, reduce errors, and they make code more readable.
*/
/*
//------------------------------------------------------------------------------
While Loop
The while loop loops through a block of code as long as a specified condition is true:*/
// while loop
#include<iostream>
using namespace std;
int main(){
int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}
return 0;
}
//-----------------------------------------------------------------------------

/*do while loop 
The do/while loop is a variant of the while loop. This loop will execute the code block once, 
before checking if the condition is true, 
then it will repeat the loop as long as the condition is true
*/#include<iostream>
using namespace std;
int main(){
int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
return 0;
}
