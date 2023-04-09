#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(NULL));

    int a, b, num, operation, input;
    cout <<"산수문제를 자동으로 출력합니다"<<endl;

    while(true) { 
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        num = rand() % 4; 

        switch(num) {
            case 0: 
                operation = a + b;
                cout << a << "+" << b << "= ?";
                break;
            case 1: 
                operation = a - b;
                cout << a << "-" << b << "=? ";
                break;
            case 2: 
                operation = a * b;
                cout << a << "*" << b << "= ?";
                break;
            case 3: 
                operation = a / b;
                cout << a << " / " <<b << "= ?";
                break;
        }//switch


    cin >> input;
        if(input==operation){
            cout<<"맞았습니다."<<endl;
        }else{
            cout<<"틀렸습니다."<<endl;
        }
    }
	return 0;
} //main