//Q.1 ->  Triangle Pattern
// 1
// 12
// 123
// 1234

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



// Q.3 -> Floy'd Triangle Pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++){
      for(int j=i+1; j>0; j--){
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}
