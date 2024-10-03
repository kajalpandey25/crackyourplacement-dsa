// Q.1 -> Calculate sum of numbers from 1 to N.
#include <iostream>
using namespace std;

int sumN(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;
    return 0;
}



// Q.2 -> Calculate N factorial
#include <iostream>
using namespace std;

int factorialN(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    cout << factorialN(4) << endl;
    cout << factorialN(5) << endl;
    return 0;
}


// Q.3 -> Calculate sun of digits of a number.
#include <iostream>
using namespace std;

int sumOfDigits(int num){
  int digSum = 0;

  while (num > 0){
    int lastDig = num % 10;
    num /=10;

    digSum += lastDig;
  }

  return digSum;
}

int main() {
    cout << "sum = " << sumOfDigits(2356) << endl;
    return 0;
}