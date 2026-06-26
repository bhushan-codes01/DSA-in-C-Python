// #include<iostream>
// using namespace std;

// int DecToBin(int decNum){
//     int ans = 0 , pow = 1;

//     while(decNum >0){
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += (rem * pow);
//         pow *= 10;

//     }
//     return ans ;
// }

// int main() {
//     int decNum = 50;
//     for(int i=1 ; i<=10 ; i++){
//     cout<< DecToBin(i)<<endl;
//     }
//     return 0;
// }

// binary to decimal 

// #include<iostream>
// using namespace std;

// int bintodec(int binNum) {
//     int ans = 0, pow = 1;

//     while (binNum > 0) {
//         int rem = binNum % 10;

//         ans += rem * pow;

//         binNum /= 10;
//         pow *= 2;
//     }

//     return ans;
// }

// int main() {

//     for (int i = 1; i <= 10; i++) {
//         cout << i << " -> " << bintodec(i) << endl;
//     }

//     return 0;
// }

//  bitwise operators __________
//  bitwise &
// #include<iostream>
// using namespace std ;
// int main (){
//     int a = 4 , b = 3;
//     cout << (a & b) << endl;
//     return 0;
// }

// bitwise | or 
// #include<iostream>
// using namespace std ;
// int main (){
//     int a = 4 , b = 3;
//     cout << (a | b) << endl;
//     return 0;
// }

// bitwise xor
// #include<iostream>
// using namespace std ;
// int main (){
//     int a = 3 , b = 7;
//     cout << (a ^ b) << endl;
//     return 0;
// }
//  bitwise leftshift <<
// #include<iostream>
// using namespace std ;
// int main (){
//     cout << (10 << 2) <<endl;
//     return 0;
// }
// bitwise rightwise >>
#include<iostream>
using namespace std ;
int main (){
    cout << (10 >> 2) <<endl;
    return 0;
}
