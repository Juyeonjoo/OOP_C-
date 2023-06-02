#include <iostream>
using namespace std;

class Date{
    int day;    
    int month;
    int year;

public: 
    Date(int y, int m, int d);
    Date(string s);//기말고사, String s 를 가지고 있는 생성자를 구현하시오 . >이거 대신에 선언부를 낼 것. 

    void show();
    int getYear(){
        return year;
    }
    int getMonth(){
        return month;
    }
    int getDay(){
        return day;
    }
};//end class 클래스 선언부 세미콜른 반드시 

Date::Date(int y, int m, int d){
    year = y;
    month = m;
    day = d;
}//Date

Date::Date(string s){
    int index1 = s.find("/");
    string y = s.substr(0, index1);
    int index2 = s.find("/", index1 + 1);
    string m = s.substr(index1 +1, index2);
    string d = s.substr(index2 + 1, s.length());

    year = stoi(y);
    month = stoi(m);
    day = stoi(d);
}//Date 

void Date::show(){
    cout << year << "년" << month << "월"<< day << "일" << endl;
}//show

int main(){
    Date birth(2014, 3, 20);

    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << "," << birth.getMonth()<<birth.getDay()<<endl;
}//main