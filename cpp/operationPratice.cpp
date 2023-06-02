#include <iostream>
using namespace std;

int a = 5, b =10;

int result1 = b<<2;
int result2 = a != b ;
int result3 = (a>b)? a : b;
int c = a++;

c= (a+b, a-b);
int main(){

    cout << a + b/3*3 << endl; // 답: 14, b/3 몫 = 3
    cout <<  result1 << endl; // int result1 = b<<2; 왼쪽으로 이동, 1010 >101000, 40
    cout << result2 << endl; // int result2 = a != b ; 
    cout <<b%a <<endl;    // 0 
    cout << result3 << endl;  // int result3 = (a>b)? a : b; b가 크므로 10
    cout << sizeof(a) <<endl;  //4
    // int data type occupies 4 bytes of memory. the sizeof() operator is used to determine the amount of memory in bytes

   
}//main