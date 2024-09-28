// Function syntax
// returnType printHello(){
//     cout << "hello";
// }

// #include <iostream>
// using namespace std;

// // function definition
// int printHello(){
//     cout << "hello\n";
//     return 3;
// }

// int main(){
//     // function call / invoke
//     cout << printHello() << endl;
//     return 0;
// }

// parameters
// returnType funName(type p1, type p2...){
//     // do some work
// }

#include <iostream>
using namespace std;

// sum of 2 number
int sum(int a, int b){
    int s = a+b;
    return s;
}

// min of 2 nums
int minOfTwo(int a, int b){ // parameter
    if(a < b){
        return a;
    } else {
        return b;
    }
}

int main(){
    cout << sum(10, 5) << endl;
    cout << "min = " << minOfTwo(5,3) << endl; // arguments
    return 0;
}
