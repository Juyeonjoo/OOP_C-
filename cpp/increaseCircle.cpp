#include <iostream>
using namespace std;

class Circle {
	int radius;
    
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea(){
        return 3.14*radius*radius;
    }
    int getRadius(){
        return radius;
    }
    void setRadius(int radius){
        this->radius=radius;
    }
    void increaseCircle(Circle &circle);

};

Circle::Circle() {
	radius = 1;
    cout <<"생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	 this->radius=radius;
     cout << "생성자 실행 radius   = " << radius << endl;
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

void Circle::increaseCircle(Circle& circle) {
    circle.radius = circle.radius + 1;
}

int main() {
    Circle waffle(30);
    waffle.increaseCircle(waffle);
    cout << waffle.getRadius()<<endl;
}
