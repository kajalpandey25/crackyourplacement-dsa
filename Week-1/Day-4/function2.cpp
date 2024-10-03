// Function in memory
#include <iostream>
using namespace std;

 void fun(){
    return; // control
    cout << "hello\n";
 }

 int main(){
    fun();
    return 0;
 }
 


// pass by value => Copy of argument is passed to function

#include <iostream>
using namespace std;

 int sum(int a, int b){
    return a+b;
 }

 int main(){
    int x = 5, y= 4;
    cout << sum(x,y) << endl;
    return 0;
 }
 

// pass by value-2
#include <iostream>
using namespace std;

int changeX(int x){
   x = 2*x;
   cout << "x = " << x << endl;
 }

 int main(){
    int x = 5;
    changeX(x);

    cout << "x = " << x << endl;
    return 0;
 }


