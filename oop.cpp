#include <iostream> 
using namespace std;

class MyClass{ //declare class like in java
	public: // access specifier
		int num;
		string myString;
		void method(){
			cout << myString<<endl;
		}
		void method2(); // object methods can have signatures as well
		// A constructor
		MyClass(int x){
			num = x;
			myString = "Hello World!";
		}
		void setY(int y){
			this->y = y; // how to differenciate instance variables and method variables
		}
		int getY(){
			return y;
		}
	private: // cannot be accessed outside the class
		int y;
};
// how to define a method outside the class
void MyClass::method2(){
	cout << num<<endl;
}

int main(){
	MyClass obj(15);

	obj.method();
	obj.method2();
	obj.setY(20);
	cout << obj.getY()<<endl;
}

/*
	By default, all class elements are private
*/