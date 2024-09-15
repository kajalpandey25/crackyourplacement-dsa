// Lopps
// 1. while loop
// 2. for loop
// 3. do-while loop

// 1. while loop
// Q.1 -> Print numbers 1 to 5
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int count = 1;

    while (count <= n){
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;
}

// Q.2 -> Sum of numbers from 1 to n.
#include <iostream>
using namespace std;

int main()
{
    int n = 50;
    int i = 1;
    int sum = 0;

    while(i <= n){
        sum+= i;
        i++;
    }
    cout << "sum = " << sum << endl;
    return 0;
}

// Q.3 -> sum of all odd numbers from 1 to N
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int i = 1;
    int oddSum = 0;

    while (i <= n){
        if (i % 2 != 0){
            oddSum += i;
        }
         i++;
    }
    cout << "oddSum = " << oddSum << endl;
    return 0;
}

// Q.4 -> sum of all even numbers from 1 to N
#include <iostream>
using namespace std;

int main(){
    int n = 20;
    int i = 1;
    int evenSum = 0;

    while(i<=n){
        if(i%2 ==0){
            evenSum+= i;
        }
        i++;
    }
    cout << "evenSum = " << evenSum << endl;
    return 0;
}

