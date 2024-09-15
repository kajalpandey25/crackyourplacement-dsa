// conditional statements
// 1. if-else


// Q.1 -> Positive and negative number 
#include <iostream>
using namespace std;

int main(){
    int n = 45;

    if (n >= 0){
        cout << "n is postive\n";
    }
    else{
        cout << "n is negative\n";
    }
    return 0;
}


// q.2 -> You can vote or not
#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter age : ";
    cin >> age;

    if(age >= 18){
        cout << "You can vote\n";
    } else{
          cout << "You can't vote\n";
    }
  return 0;
}


// Q.3 -> Even or odd
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    if(n%2==0){
        cout << "Even Number\n";
    } else{
        cout << "Odd Number\n";
    }
    return 0;
}


// Q.4 -> Lower case and upper case
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter char : ";
    cin >> ch;

    if(ch >='a' && ch <='z'){
        cout << "lowercase\n";
    }else{
        cout << "uppercase\n";
    }
    return 0;
}


// 2nd method
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter char : ";
    cin >> ch;

    if(ch >='A' && ch <='Z'){
        cout << "Uppercase\n";
    }else{
        cout << "lowercase\n";
    }
    return 0;
}


// Using ASCII
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter char : ";
    cin >> ch;

    if(ch >=65 && ch <=90){
        cout << "Uppercase\n";
    }else{
        cout << "lowercase\n";
    }
    return 0;
}


// 2. if-else if-else


// Q.1 -> Students Marks
#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter Marks : ";
    cin >> marks;

    if(marks >= 90){
        cout << "A\n";
    } else if(marks >=80 && marks <=90){
         cout << "B\n";
    }else{
        cout << "C\n";
    }
    return 0;
}

