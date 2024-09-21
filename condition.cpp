/*
1) if condition code
#include<iostream>
using namespace std;
int main(){

int x = 20;
int y = 18;
if (x > y) {
  cout << "x is greater than y";
}
return 0;
}
-------------------------------------------------------------
Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b
*/

//--------------------------------------------------------------------------
//2) else conditin code'
/*#include<iostream>
using namespace std;
int main(){
int time = 24;
if (time < 25) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
return 0;}

//------------------------------------------------------------------

//3)  if else code*/
#include<iostream>
using namespace std;
int main(){
    int time = 22;
if (time < 10) {
  cout << "Good morning.";
} else if (time < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}return 0;
}
