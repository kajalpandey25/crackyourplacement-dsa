// 2. for loop
// Q.1 -> Print numbers 1 to 100
#include <iostream>
using namespace std;

int main(){
    int n = 100;

    for(int i = 1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

// Q.2 -> Sum of numbers from 1 to n.
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum = " << sum << endl;
    return 0;
}

// Q.3 -> sum of all odd numbers from 1 to N
 #include <iostream>
using namespace std;

int main(){
    int n = 5;
    int oddSum = 0;

    for (int i = 1; i <= n; i++){
        if(i%2 != 0){
            oddSum += i;
        }
    }
    cout << "oddSum = " << oddSum << endl;
    return 0;
}


// Q.4 -> sum of all even numbers from 1 to N
#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int evenSum = 0;

    for(int i = 1; i<=n; i++){
        if(i%2 ==0){
            evenSum+= i;
        }
    }
    cout << "evenSum = " << evenSum << endl;
    return 0;
}


// Break statement
#include <iostream>
using namespace std;

int main()
{
    int n = 30;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if(i == 10){
            break;   // keyword
        }
    }
    cout << "sum = " << sum << endl;
    return 0;
}