//pattern in c++
// #include<iostream>
// using namespace std ;
// int main(){
//   int n = 4;
//   for(int i =0; i<=n ; i++){
//     char ch = 'A';
//     for(int j =0; j<=n ; j++){
//     cout << ch <<" ";
//     ch = ch + 1;
//     }
//     cout << endl;
//     }
    
//         return 0;
// }


// square patterns for intergers
// #include<iostream>
// using namespace std;
// int main(){
//  int  n = 3 ;
//  char num = 1 ;
//  for(int i =0; i<n ; i++){
//   for( int j = 0 ; j<n ; j++){ 
//     cout <<num<< " ";
//     num ++;
//   }
//      cout<<endl;
//  }
//  return 0;

// }



// square patterns very important for characters 
// #include<iostream>
// using namespace std;
// int main(){
//  int  n = 3 ;
//  char ch = 'A' ;
//  for(int i =0; i<n ; i++){
//   for( int j = 0 ; j<n ; j++){ 
//     cout <<ch << " ";
//     ch ++;
//   }
//      cout<<endl;
//  }
//  return 0;

// }



//triangle pattern of stars 
// #include<iostream>
// using namespace std;
// int main(){
//  int n = 4 ;
//  for(int i = 0 ; i <n ; i++){
//   for(int j = 0 ; j < i+1 ; j++){
//     cout<< "*" << " ";
//   }
//  cout<<endl;
//  }
//  return 0 ;
// }


// triangle pattern using numbers 
// #include<iostream>
// using namespace std ;
// int main(){
// int n = 4;
// for( int i = 0 ; i<n ; i++){
//   for(int j = 0 ; j < i +1 ; j++){
//     cout<< i+1 ;
//   }
//   cout<<endl;
// }
  
//   return 0;
// }


// triangle patterns for characters
// #include<iostream>
// using namespace std ;
// int main(){
// int n = 7;
// char ch = 'A';
// for( int i = 0 ; i<n ; i++){
//   for(int j = 0 ; j < i +1 ; j++){
//     cout<< ch  ;
    
//   }
//   ch ++ ;
//   cout<<endl;
// }
  
//   return 0;
// }

// triangle pattern
// #include<iostream>
// using namespace std;
// int main(){
//   int n = 4;
//   for(int i = 0 ; i <=n ; i++){
//     for(int j = 1; j < i+1 ; j++ ){
//       cout<< j << " ";
//     }
//     cout<<endl;
//   }
//   return 0;




// reverse triangle pattern
// #include<iostream>
// using namespace std;
// int main(){
// int n = 4;
// for(int i = 0 ; i < n ; i++){
//   for ( int j=i+1 ; j>=0; j--){
//     cout<< j <<" ";
//   }
//   cout<<endl ;
// }
// return 0 ;
// }



//flyod's triangle pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     int num = 1;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// flyod's character verison triangle patterns
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     char ch = 'A';

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }





//inverted triangle pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
   
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i ; j++) { // spaces
//             cout << " ";
            
//         }
//         for( int j = 0 ; j < n-i ; j++){ //numbers
//           cout << (i+1);
//         }

//         cout << endl;
//     }

//     return 0;
// }

// inverted triangkle character version
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     char ch = 'A';

//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }

//         for (int j = 0; j < n - i; j++) {
//             cout << ch;
//         }

//         ch++;
//         cout << endl;
//     }

//     return 0;
// }

///pyramid pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for (int i = 0; i < n; i++) {

//         // Spaces
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         // Increasing numbers
//         for (int j = 1; j <= i + 1; j++) {
//             cout << j;
//         }

//         // Decreasing numbers
//         for (int j = i; j >= 1; j--) {
//             cout << j;
//         }

//         cout << endl;
//     }

//     return 0;
// }


// hollow diamod patttern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     // Upper half
//     for (int i = 0; i < n; i++) {

//         // Leading spaces
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         cout << "*";

//         // Inner spaces
//         if (i != 0) {
//             for (int j = 0; j < 2 * i - 1; j++) {
//                 cout << " ";
//             }
//             cout << "*";
//         }

//         cout << endl;
//     }

//     // Lower half
//     for (int i = n - 2; i >= 0; i--) {

//         // Leading spaces
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         cout << "*";

//         // Inner spaces
//         if (i != 0) {
//             for (int j = 0; j < 2 * i - 1; j++) {
//                 cout << " ";
//             }
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// butterfly pattern

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper half
    for (int i = 1; i <= n; i++) {

        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n; i >= 1; i--) {

        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}