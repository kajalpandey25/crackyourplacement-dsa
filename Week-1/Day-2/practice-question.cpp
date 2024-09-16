// Q.1 -> check if a number is prime or not.
#include <iostream>
using namespace std;

int main(){
    int n = 7;
    bool isPrime = true;

   for(int i=2; i<=n-1; i++){
    if(n%i == 0){  // non prime
        isPrime = false;
        break;
    }
   }

   if(isPrime == true){
    cout << "Number is prime\n";
   } else{
    cout << "Number is non prime\n";
   }
//    isPrime -> true -> prime
//    isPrime -> false -> non prime
    return 0;
}



// Q.2 -> Sum of all numbers from 1 to N which are divisible by 3.

// Q.3 -> Print Factorial of a number N.