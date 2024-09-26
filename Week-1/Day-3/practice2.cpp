//Q.1 ->  Triangle Pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for(int i=0; i<n; i++){
//       for(int j=1; j<=i+1; j++){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// Q.2 -> Reverse Triangle Pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for(int i=0; i<n; i++){
//       for(int j=i+1; j>0; j--){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Q -> Reverse Triangle Pattern(char)
// A
// B A
// C B A
// D C B A

#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            cout << char('A' + j) << " ";  // Convert j to corresponding character
        }
        cout << endl;
    }
    return 0;
}




// Q.3 -> Floy'd Triangle Pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     int num = 1;
//     for(int i=0; i<n; i++){
//       for(int j=i+1; j>0; j--){ // backwords => i+1
//             cout << num <<" ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Q -> Floy'd Triangle Pattern(char)
// A
// B C
// D E F
// G H I J

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     char ch = 'A';
//     for(int i=0; i<n; i++){
//       for(int j=i+1; j>0; j--){ // backwords => i+1
//             cout << ch <<" ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }