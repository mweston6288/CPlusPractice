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
};
// how to define a method outside the class
void MyClass::method2(){
	cout << "Test"<<endl;
}

int main(){
	MyClass obj;
	MyClass obj2;

	obj.num = 15;
	obj.myString = "Hello World!";
	obj.method();
	obj.method2();
}