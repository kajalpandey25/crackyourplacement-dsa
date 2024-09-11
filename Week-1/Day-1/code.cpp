#include <iostream>
using namespace std;

// This is the starting point of the execution
int main(){

   return 0;
}

// Boilerplate code - comment

#include <iostream>
using namespace std;

int main()
{
    cout << "Kajal\n" << "Pandey\n";
    return 0;
}


// Variables => containers to store data
// Data Types =>
// -> Primitive Data Type
// 1. int - 4 Bytes
// 2. char - 1 Byte
// 3. float - 4 Byte
// 4. bool - 1 Byte
// 5. double - 8 Byte

#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = true; // true -> 1 & false -> 0
    double price = 100.99;

    // cout << sizeof(age) << endl;
    // cout << sizeof(grade) << endl;
    // cout << sizeof(PI) << endl;
    // cout << sizeof(isSafe) << endl;
    // cout << sizeof(price) << endl;
    cout << age << endl;
    cout << grade << endl;
    cout << PI << endl;
    cout << isSafe << endl;
    cout << price << endl;
    return 0;
}


// Type Casting
// Convert data from one type to another
#include <iostream>
using namespace std;

int main(){
    char grade = 'A'; //65
    double price = 100.99;


    int value = grade;
    int newPrice = (int)price;
    cout << value << endl;
    cout << newPrice << endl;
    return 0;
}
