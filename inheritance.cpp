#include <iostream>
using namespace std;

class Vehicle{
	public:
		string brand = "Ford";
		void honk(){
			cout << "Honk!\n";
		}
};
class MyClass{
	public:
		void method(){
			cout<<"Entered\n";
		}
};
// Classes can inherit from multiple classes
class Car: private Vehicle, public MyClass{
	public:
		string model = "Mustang";
};

int main(){
	Car myCar;
	myCar.honk();
	cout << myCar.brand + " " + myCar.model<<endl;
	myCar.method();
}