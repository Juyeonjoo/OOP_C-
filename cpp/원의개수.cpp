#include <iostream>
using namespace std;

class Circle2 {
	int radius;
public:
	Circle2();
	Circle2(int r);
	~Circle2();
	void setRadius(int r);
	double getArea();
};

Circle2::Circle2() {
	radius = 0;
}

Circle2::Circle2(int r) {
	radius = r;
}

Circle2::~Circle2() {
}

void Circle2::setRadius(int r) {
	radius = r;
}

double Circle2::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int count;
	cout << "생성하고자 하는 원의 개수 ?  ";
	cin >> count;

	Circle2 *Circle2Array = new Circle2[count]; 

	for (int i = 0; i < count; i++) {
		int r;
		cout << "원 " << i+1 << ": ";
		cin >> r;
		Circle2Array[i].setRadius(r);
	}

	int countInRange = 0;
	for (int i = 0; i < count; i++) {
		double area = Circle2Array[i].getArea();
		if (area >= 100 && area <= 200) {
			countInRange++;
		}
	}

    for (int i = 0; i < count; i++) {
        double area = Circle2Array[i].getArea();
        cout << "원 " << i+1 << "의 면적: " << area << endl;
    }

	cout << "면적이 100에서 200 사이인 원의 개수는?  " << countInRange << endl;

	delete[] Circle2Array; 

	return 0;
}
