// Array Syntax => Creation
// -> same type
// -> contiguous in memory + linear

// #include <iostream>
// using namespace std;

// int main()
// {
//     int marks[5] = {99, 100, 54, 36, 88};

//     cout << marks[0] << endl;
//     cout << marks[1] << endl;
//     cout << marks[2] << endl;
//     cout << marks[3] << endl;
//     cout << marks[4] << endl;
//     return 0;
// }


// Loops on arrays

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int marks[size];

//      for(int i=0; i<size; i++){
//         cin >> marks[i];
//     }

//     // loops : 0 to size-1
//     for(int i=0; i<size; i++){
//         cout << marks[i] << endl;
//     }
//     return 0;
// }


// -> find smallest/largest in Array

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT16_MAX;

    for(int i=0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    cout << "smallest=" << smallest << endl;
    return 0;
}