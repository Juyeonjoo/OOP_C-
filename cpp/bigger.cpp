#include <iostream>
#include <cstdlib>
using namespace std;

bool bigger(int a, int b, int &big){
    if(a==b){
        cout << "same" << endl;
        return true;
    }else{
        if(a>b){
                big=a;
            }else{
                big=b;
            } //innter if
            //big이 참조변수이기 때문에 big의 수정된 값이 변수 c의 값이 될 수 있다. 
            cout<<"큰 수는 " << big <<endl;
            return false;
    }// outter if
};//bigger

int main(){
    int a, b, c;
    cout << "두 정수를 입력하세요 >> ";
    cin>>a>>b;
    bigger(a, b, c);
}//main
