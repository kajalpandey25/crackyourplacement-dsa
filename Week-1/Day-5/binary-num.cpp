// Binary number system =>
// The binary number system is a way to represent numbers using only two digits: 0 and 1. It is a base-2 system, in contrast to the decimal system, which is base-10 and uses digits from 0 to 9.

// 1. Decimal to Binary ->

#include <iostream>
using namespace std;

int decToBinary(int decNum){
     int ans = 0, pow = 1;

     while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
     }

     return ans; // binary form
}

int main(){
    int decNum = 50;

    //  cout << decToBinary(decNum) << endl;
    for(int i=1; i<=10; i++){
        cout << decToBinary(i) << endl;
    }
    return 0;
}




// 2. Binary to Decimal

#include <iostream>
using namespace std;

int binToDecimal(int binNum){
     int ans = 0, pow = 1;

     while(binNum > 0){
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
     }

     return ans; // decimal form
}

int main(){
   cout << binToDecimal(1010) << endl;  // 10

    return 0;
}



// 3. Convert -8 to binary & reverse.

#include <iostream>
#include <bitset>  // Include this header for bitset
#include <string>  // Include this header for string manipulation
using namespace std;

int main() {
    int num = -8;
    int abs_num = abs(num);

    // Convert absolute value of -8 to binary (8 bits for simplicity)
    bitset<8> binary(abs_num);
    string bin_str = binary.to_string();

    // Reverse the binary string
    string reversed_bin_str = string(bin_str.rbegin(), bin_str.rend());

    // Output results
    cout << "Original number: " << num << endl;
    cout << "Binary of 8: " << bin_str << endl;
    cout << "Reversed binary: " << reversed_bin_str << endl;

    return 0;
}
