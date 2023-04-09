#include <iostream>
using namespace std;

int main(){

    int carNum;
    int lastDigit;

    cout << " 차량 번호 4자리를 입력해주세요: " ;
    cin >> carNum;

    lastDigit = carNum % 10; //10으로 나눈 나머지 값
    switch(lastDigit){
        case 1 :
        case 6:
            cout<<"월요일 주차 불가합니다."<<endl;
            break;
        case 2 :
        case 7 :
            cout<<"화요일 주차 불가합니다.1"<<endl;
            break;
        
        default :
            cout<<" 주차 가능합니다."<<endl;
    }//switch

} //main