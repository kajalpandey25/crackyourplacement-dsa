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
 

