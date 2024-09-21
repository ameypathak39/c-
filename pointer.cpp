/*Creating Pointers
You learned from the previous chapter, that we can get the memory address of a variable by using the & operator:
#include <iostream>
using namespace std;
int main(){
    string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";
return 0;

}
//----------------------------------------------------------------------------------------------------------------------
Get Memory Address and Value
In the example from the previous page,
 we used the pointer variable to get the memory address of a variable
  (used together with the & reference operator). However, you can also use the pointer to get the value of the variable, 
  by using the * operator (the dereference operator):

#include <iostream>
using namespace std;
int main(){
  string food = "Pizza";  // Variable declaration
string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";

return 0;

}

//-------------------------------------------------------------------------------------------------------------------------


/*Modify the Pointer Value
You can also change the pointer's value. But note that this will also change the value of the original variable:

Example*/
#include <iostream>
using namespace std;
int main(){

string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";
return 0;
}
