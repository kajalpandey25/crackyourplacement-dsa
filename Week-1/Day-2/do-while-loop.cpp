// 3. do-while loop
// q.1 -> print numbers 1 to N
#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int i = 1;

    do{
        cout << i << " ";
        i++;
    }while (i <= n);

    cout << endl;
    return 0;
}