#include <iostream> // header file library lets us work with input and output objects
using namespace std; // using names for objects and variables
int main(){
    // cout << "Hello world :-) " << endl;
    // int a  = 123;
    // int size  = sizeof(a);
    // char mystring = 'a';
    char ch = 123456;
    cout << ch <<endl;
    // cout << size << endl;
    // cout << mystring << endl;
}
// std wala jo namespace hai uska cout use krna hai

// compiler : translation
//             find errors
// << koi bhi output display krwana hai std cout namespace k ander iska use karte hai
// << endl - new line print kro or '\n' also
// int = 32 bit = 4 byte (int can take less than 4 byte it depends on the compiler but generally it takes 4 bytes)
// char ch = 'a'; 1 byte=> 8 bit
// bool 1 bit ; bool b = 1;
// float f = 1.2 ; 8 byte
// double d = 1.23; 8 byte
// defenination not allowded
// sizeof =  show how may bytes(memory) datatype can store;
// char b ='a' right but char b = 'ab', worng only single characters are allowded
//Type casting
// int a = 'a' => 97
// char ch = 98 => b
//How negative numbers are stores
    // 1st bit =0 +ve
    // 1st bit =1 -ve
// unsigned int = 123; will store ony +ve numbers if provided with negative I will print a very big number
// OPERATORS: / this is operator is bit different
// decalring Constant variable which cannot change;
    // const in myNum = 10;
        // myNum = 15; while throw an error

//FLOAT VS DOUBLE
 // float = precision == 6-7 decimal degitis
 // double = 15 decimal digits
 // float f1 = 35e3 => 35, 000
 // double d1 = 12E4 => 12,0000