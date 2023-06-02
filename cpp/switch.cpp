#include <iostream>
 
using namespace std;

int main(){


	int countV = 0; 
	int countC = 0; //countV 모음, countC 자음
	char ch;
	
	cout << "영문자를 입력하고 콘트롤 ^Z를 치세요 ";
	while(cin>>ch){
	
		switch(ch){
			case 'a':
			case 'e':

			case 'i':
			case 'o':
			case 'u':  
				countV++;
				break;
			default: 	
				countC++; 
				break;
		}//switch
	}//while
	
	cout <<"모음"<<countV<<endl;
	cout <<"자음"<<countC<<endl;
	
	return 0;		
}//main

