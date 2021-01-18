#include <iostream> 
using namespace std;

class MyClass{ //declare class like in java
	public: // access specifier
		int num;
		string myString;
};

int main(){
	MyClass obj;

	obj.num = 15;
	obj.myString = "Hello World!";
	cout << obj.num<<"\n";
	cout << obj.myString<<"\n";
}