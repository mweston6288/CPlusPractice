#include <iostream> 
using namespace std;

class MyClass{ //declare class like in java
	public: // access specifier
		int num;
		string myString;
};

int main(){
	MyClass obj;
	MyClass obj2;

	obj.num = 15;
	obj.myString = "Hello World!";
	obj2.num = 45;
	obj2.myString = "Test";
	cout << obj.num<<"\n";
	cout << obj2.num << "\n";
	cout << obj.myString<<"\n";
}