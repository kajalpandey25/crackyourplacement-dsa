// Homework Question
// Q.1 -> WAF to check if a number is prime or not.
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    // Edge case: numbers less than 2 are not prime
    if (n <= 1) {
        return false;
    }

    // Check divisibility from 2 to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  // n is divisible by i, so it's not prime
        }
    }
    
    return true;  // n is prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

// Q.2 -> WAF to print all prime numbers from 1 to N.
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  // n is divisible by i, so it's not prime
        }
    }

    return true;  // n is prime
}

// Function to print all prime numbers from 1 to N
void printPrimes(int N) {
    cout << "Prime numbers from 1 to " << N << " are: ";
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    printPrimes(N);

    return 0;
}

// Q.3 -> WAF to print nth Fibonacci.

#include <iostream>
using namespace std;

// Function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Base case: F(0) = 0
    } 
    else if (n == 1) {
        return 1;  // Base case: F(1) = 1
    }

    int a = 0, b = 1, fib;

    // Calculate the nth Fibonacci number iteratively
    for (int i = 2; i <= n; i++) {
        fib = a + b;  // F(i) = F(i-1) + F(i-2)
        a = b;        // Move to the next number
        b = fib;
    }

    return fib;
}

int main() {
    int n;
    cout << "Enter the position n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
