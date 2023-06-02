#include <iostream>
#include <cstdlib>
using namespace std;

/*
void fillLine(){
    for(int i=0; i<25; i++){
        cout << '*';
    }//for
    cout<<endl;
}//
*/
void fillLine(int n=25, char c='*'){
    for(int i=0; i<n; i++){
        cout << c;
    }//for
    cout<<endl;
}//

int main(){
    fillLine(); //25개의 '*'를 한 라인에 출력
   fillLine(10, '%'); //10개의 '%'를 한 라인에 출력
}//main