#include <iostream>
#include <cstdlib>
using namespace std;
int print(int i) {
	cout  << "정수 출력 : " ;
	int result = i ;
	cout << result << endl;
	return result;
}//int 

double print(double i) {
	cout << "실수 출력 : " ;
	double result = i;
	cout << result << endl;
	return result;
	
}//double 
char print(char i) {
	cout << "문자 출력 : " ;
	char result = i;
	cout << result << endl;
	return result;
}//char 

int main() {
	print(100);
	print(3.14);
	print('C');
	return 0;
}
