// Input in C++
#include <iostream>
using namespace std;

int main(){
    int age;
    double price;
    // cout << "Enter the age : ";
    cout << "Enter the price : ";
    // cin >> age;
    cin >> price;

    // cout << "Your age is : " << age << endl;
    cout << "You entered price = " << price << endl;
    return 0;
}

// Operators
// -> Arithmetic = +, -, *, /, %

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    cout << "sum = " << (a + b) << endl;        // 15
    cout << "difference = " << (a - b) << endl; // 5
    cout << "product = " << (a * b) << endl;    // 50
    cout << "division = " << (a / b) << endl;   // 2
    cout << "modulo = " << (a % b) << endl;     // 0
    return 0;
}

// -> Relational = <, <=, >, >=, ==, !=

#include <iostream>
using namespace std;

int main()
{
    cout << (3 < 5) << endl;  // true -> 1
    cout << (3 > 5) << endl;  // false -> 0
    cout << (3 <= 3) << endl; // true -> 1
    cout << (3 >= 5) << endl; // false -> 0
    cout << (3 == 3) << endl; // true -> 1
    cout << (3 != 5) << endl; // true -> 1
    return 0;
}

// -> Logical = OR(||), AND(&&), NOT(!)

#include <iostream>
using namespace std;

int main()
{
    cout << !(3 > 1) << endl; // false -> 0
    cout << ((3 < 1) || (3 < 5)) << endl; // true -> 1
    cout << ((3 > 1) && (3 > 4)) << endl; // false -> 0
    return 0;
}


// Unary Operators
// -> Increment++
// -> Decrement--


// -> Increment++ (Post-increment)
#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int b = a++;  // kaam : update
    cout << "b = " << b << endl; // 10
    cout << "a = " << a << endl; // 11
    return 0;
}


// -> Increment++ (Pre-increment)
#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int b = ++a;  // update : kaam
    cout << "b = " << b << endl; // 11
    cout << "a = " << a << endl; // 11
    return 0;
}


 // -> Decrement-- (Post-Decrement)
#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int b = a--;  // kaam : update
    cout << "b = " << b << endl; // 10
    cout << "a = " << a << endl; // 9
    return 0;
}


// -> Decrement-- (Pre-Decrement)
#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int b = --a;  // update : kaam
    cout << "b = " << b << endl; // 9
    cout << "a = " << a << endl; // 9
    return 0;
}