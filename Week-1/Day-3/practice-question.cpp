// Q -> Repeat Square Pattern(Number)
// 1234
// 1234
// 1234
// 1234
#include <iostream>
 using namespace std;

int main(){
    int n=4;

    for(int i=1; i<=n; i++){ // outer

        for(int j=1; j<=n; j++){ // inner
            cout << j << " ";
        }
          cout << endl;
    }
    return 0;
}


// Q.1 ->  Repeat Square Pattern(star)
// ****
// ****
// ****
// ****
 #include <iostream>
 using namespace std;

int main(){
    int n=4;

    for(int i=1; i<=n; i++){ // outer

        for(int j=1; j<=n; j++){ // inner
            cout << "* ";
        }
          cout << endl;
    }
    return 0;
}

// Q.2 ->Repeat Square Pattern(character )
// ABCD
// ABCD
// ABCD
// ABCD
#include <iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0; i<n; i++){ // outer
          char ch = 'A';
        for(int j=0; j<n; j++){ // inner
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}

// Q.3 -> Square Pattern(Number)
// 123
// 456
// 789
#include <iostream>
using namespace std;

int main(){
    int n = 3;
    int num = 1;

    for (int i = 0; i < n; i++){ // outer
        for (int j = 0; j < n; j++){ // inner
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}


// Q.4 ->Square Pattern( Character )
// ABC
// DEF
// GHI
#include <iostream>
using namespace std;

int main(){
    int n = 3;
    char ch = 'A';

    for (int i = 0; i < n; i++){ // outer
        for (int j = 0; j < n; j++){ // inner
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}


// Q.5 -> Triangle Pattern(star)
// *
// **
// ***
// ****
// *****
// ******
#include <iostream>
using namespace std;

int main(){
    int n =6;

    for(int i = 0; i<n; i++){ // n
        for(int j = 0; j<i+1; j++){ // i+1
            cout << "*";
        }   
        cout << endl; 
}
    return 0;
}


// Q.6 -> Triangle Pattern(Number)
// 1
// 22
// 333
// 4444
#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}


// Q.7 -> Triangle Pattern(Character)
// A
// BB
// CCC
// DDDD
// EEEEE
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    char ch= 'A';

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << ch;
        }
        cout << endl;
        ch++;
    }
    return 0;
}
