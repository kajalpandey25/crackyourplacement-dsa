// Q.1 -> Inverted Triangle Pattern
// 1 1 1 1
//  2 2 2
//    3 3
//      4

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     int num = 1;
//     for (int i = 0; i < n; i++){
//         // spaces
//         for (int j = 0; j < i; j++){
//             cout << " ";
//         }

//         // nums
//         for (int j = 0; j < n - i; j++){
//             cout << (i + 1);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Q.2 -> Inverted Triangle Pattern(char)
// A A A A
//   B B B
//     C C
//       D

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     char ch = 'A';
//     for (int i = 0; i < n; i++){
//         // spaces
//         for (int j = 0; j < i; j++){
//             cout << " ";
//         }

//         // nums
//         for (int j = 0; j < n - i; j++){
//             cout << ch;
//         }
//         cout << endl;
//         ch++;
//     }
//     return 0;
// }



// Q.3 -> Pyramid Pattern
//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for (int i = 0; i < n; i++){
        // spaces: n-i-1
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        // nums1 : i+1
        for(int j=1; j<=i+1; j++){
            cout << j;
        }

        // nums2
        for(int j=i ; j>0; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}


// Q.4 -> Hollow Diamond Pattern