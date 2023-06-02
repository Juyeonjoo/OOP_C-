#include <iostream>
using namespace std;

class Circle{
	
	int radius;
	
	public:
		Circle();		//매개변수 없는 생성자
		Circle(int r);	//매개 변수 있는 생성자 
		~Circle();//소멸자 
		
		void setRadius(int r){
			radius=r;
		}//setRadius 
		
		double getArea() {
			return 3.14*radius*radius;
		}//getArea

        int increaseCircle(int radius);

}; // end class

Circle::Circle(){ //Circle 클래스의 생성자 
	radius = 1;
	cout << "생성자 실행 radius =" << radius <<endl;
}// constructor


Circle::Circle(int r){
	radius =  r;
	cout << "생성자 실행 radius =" << radius <<endl;
};//타겟생성 


Circle::~Circle(){
	cout << "소멸자 실행 radius =" << radius <<endl;
}//소멸자 
int main(){

	Circle *pArray = new Circle [3]; //객체 배열 생성
	
	pArray[0].setRadius(10) ;

pArray[1].setRadius(20) ;
pArray[2].setRadius(30) ;
	  
	 for(int i =0; i<3; i++){
	 	cout <<pArray[i].getArea()<<endl; 
	 } //for
	 
	 Circle *p = pArray; //포인터 p 에 배열의 주소값으로 설정
	 
		for(int i =0; i<3; i++){
	 		cout <<p->getArea()<<endl;
	 		p++; //다음원소의 주소로 증가 
	 } //for 
	 
	delete [] pArray; //객체 배열 소멸 
	 
};//main

