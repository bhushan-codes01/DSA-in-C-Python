/*
=========================================
        FUNCTIONS IN C++ (DSA NOTES)
=========================================

1. What is a Function?
----------------------
A function is a block of code that performs a specific task.
Functions help in code reusability and modularity.

Syntax:
return_type function_name(parameters) {
    // code
}

=========================================
2. Function Declaration
=========================================

int add(int, int);

Declaration tells the compiler:
- Function name
- Return type
- Parameters

=========================================
3. Function Definition
=========================================

int add(int a, int b) {
    return a + b;
}

=========================================
4. Function Call
=========================================

int sum = add(5, 3);

=========================================
5. Types of Functions
=========================================

A) No Arguments, No Return Value

void greet() {
    cout << "Hello";
}

B) Arguments, No Return Value

void printNum(int n) {
    cout << n;
}

C) No Arguments, Return Value

int getFive() {
    return 5;
}

D) Arguments and Return Value

int square(int n) {
    return n * n;
}

=========================================
6. Pass By Value
=========================================

void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);

    cout << a;  // 10
}

Original variable remains unchanged.

=========================================
7. Pass By Reference
=========================================

void change(int &x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);

    cout << a;  // 100
}

Original variable gets modified.

=========================================
8. Return Statement
=========================================

int add(int a, int b) {
    return a + b;
}

return sends value back to caller.

=========================================
9. Example: Sum of Two Numbers
=========================================

int add(int a, int b) {
    return a + b;
}

=========================================
10. Example: Square of Number
=========================================

int square(int n) {
    return n * n;
}

=========================================
11. Example: Factorial
=========================================

int factorial(int n) {

    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

factorial(5) = 120

=========================================
12. Example: Prime Number
=========================================

bool isPrime(int n) {

    if(n < 2) {
        return false;
    }

    for(int i = 2; i * i <= n; i++) {

        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

=========================================
13. Example: Sum of Digits
=========================================

int sumDigits(int n) {

    int sum = 0;

    while(n > 0) {

        sum += n % 10;
        n /= 10;
    }

    return sum;
}

sumDigits(123) = 6

=========================================
14. Example: Fibonacci Number
=========================================

int fibonacci(int n) {

    if(n <= 1) {
        return n;
    }

    int a = 0;
    int b = 1;

    for(int i = 2; i <= n; i++) {

        int c = a + b;

        a = b;
        b = c;
    }

    return b;
}

=========================================
15. Function Overloading
=========================================

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

Same function name,
different parameters.

=========================================
IMPORTANT INTERVIEW POINTS
=========================================

1. Function Declaration
2. Function Definition
3. Function Call
4. Parameters vs Arguments
5. Return Statement
6. Pass By Value
7. Pass By Reference
8. Function Overloading

=========================================
PRACTICE QUESTIONS
=========================================

1. Function to add two numbers
2. Function to find square
3. Function to find cube
4. Function to check even/odd
5. Function to check prime
6. Function to find factorial
7. Function to find sum of digits
8. Function to reverse a number
9. Function to find nth Fibonacci number
10. Swap two numbers using reference

=========================================
END OF NOTES
=========================================
*/


// // #include<iostream>
// // using namespace std;
// // int printhello() {
// //  cout <<"helloworld \n";
// //  return 3;
// // }

// // int main(){
// //    int val = printhello();
// //     cout<< "val =" << val << endl;
// //     return 0 ;
// // }

// #include <iostream>
// using namespace std;

// double sum(double a, double b) {
//     double s = a + b;
//     return s;
// }

// // min value
// int minvalue(int a, int b) {
//     if (a <= b) {
//         return a;
//     } else {
//         return b;
//     }
// }

// int main() {
//     cout << "min value = " << minvalue(10, 5) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Sum of first N numbers
// int sumN(int n) {
//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     return sum;
// }

// // Factorial of N
// int fact(int n) {
//     int fact = 1;

//     for (int j = 1; j <= n; j++) {
//         fact *= j;
//     }

//     return fact;
// }

// int main() {
//     cout << "Sum till 5 = " << sumN(5) << endl;
//     cout << "Sum till 10 = " << sumN(10) << endl;

//     cout << "Factorial of 5 = " << fact(5) << endl;
//     cout << "Factorial of 6 = " << fact(6) << endl;

//     return 0;
// }

//pass by value 
// #include<iostream>
// using namespace std;

// int sum( int a , int b){
//     return a +b ;

// }
// int main(){
//     int x = 5 , y = 4;
//     cout <<sum(x,y) <<endl;
//     return 0;
// }

// sums of digit of numbers
// #include <iostream>
// using namespace std;

// int fun(int num) {
//     int digSum = 0;

//     while (num > 0) {
//         int lastDig = num % 10;
//         num /= 10;

//         digSum += lastDig;
//     }

//     return digSum;
// }

// int main() {
//     cout << "sum = " << fun(1234) << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;

//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }

//     return fact;
// }

// int nCr(int n, int r) {
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_n_r = factorial(n - r);

//     return fact_n / (fact_r * fact_n_r);
// }

// int main() {
//     int n, r;

//     cout << "Enter n: ";
//     cin >> n;

//     cout << "Enter r: ";
//     cin >> r;

//     cout << "nCr = " << nCr(n, r) << endl;

//     return 0;
// }

//1. WAF to Check if a Number is Prime
// #include <iostream>
// using namespace std;

// bool isPrime(int n) {

//     if (n < 2) {
//         return false;
//     }

//     for (int i = 2; i < n; i++) {

//         if (n % i == 0) {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {

//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (isPrime(n)) {
//         cout << "Prime Number";
//     } else {
//         cout << "Not Prime";
//     }

//     return 0;
// }
// WAF to Print All Prime Numbers from 1 to N
// #include <iostream>
// using namespace std;

// bool isPrime(int n) {

//     if (n < 2) {
//         return false;
//     }

//     for (int i = 2; i < n; i++) {

//         if (n % i == 0) {
//             return false;
//         }
//     }

//     return true;
// }

// void printPrimes(int n) {

//     for (int i = 2; i <= n; i++) {

//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
// }

// int main() {

//     int n;

//     cout << "Enter N: ";
//     cin >> n;

//     printPrimes(n);

//     return 0;
// }


//WAF to Print Nth Fibonacci Number
// #include <iostream>
// using namespace std;

// int fibonacci(int n) {

//     if (n == 0) {
//         return 0;
//     }

//     if (n == 1) {
//         return 1;
//     }

//     int a = 0;
//     int b = 1;

//     for (int i = 2; i <= n; i++) {

//         int c = a + b;

//         a = b;
//         b = c;
//     }

//     return b;
// }

// int main() {

//     int n;

//     cout << "Enter n: ";
//     cin >> n;

//     cout << fibonacci(n);

//     return 0;
// }