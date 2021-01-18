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
};
// how to define a method outside the class
void MyClass::method2(){
	cout << num<<endl;
}

int main(){
	MyClass obj(15);

	obj.method();
	obj.method2();
}