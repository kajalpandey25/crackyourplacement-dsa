// Nested loop
// Loop inside loop

#include <iostream>
using namespace std;

int main(){
     int n = 10;

    for(int i = 1; i<=n; i++){ // line
        int m = 10;
        for(int j = 1; j<=m; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}