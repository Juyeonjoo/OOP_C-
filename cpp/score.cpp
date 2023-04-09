#include <iostream>
using namespace std;

int main(){
    int score;
    int grade;

    cout << " 점수를 입력해주세요: " ;
    cin >> score;

    switch(score/10) {
        case 10:
            grade = 4;
            break;
        case 9:
            grade = 4;
            break;
        case 8:
            grade = 3;
            break;
        case 7:
            grade = 2;
            break;
        case 6:
            grade = 1;
            break;
        default:
            grade = 0;
            break;
    } //switch

    cout << "당신의  성적은: " << grade << "입니다. "<<endl;
    return 0;
} //main
