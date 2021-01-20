#include <iostream>
using namespace std;

class Vehicle{
	public:
		string brand = "Ford";
		void honk();
};
class MyClass{
	public:
		void method(){
			cout<<"Entered\n";
		}
};
// Classes can inherit from multiple classes
class Car: public Vehicle, public MyClass{
	public:
		string model = "Mustang";
		// Classes can override parent 
		void method()
		{
			cout << "Entered2\n";
		}
		void honk()
		{
			cout << "Honk!\n";
		}
};

int main(){
	Car myCar;
	myCar.honk();
	cout << myCar.brand + " " + myCar.model<<endl;
	myCar.method();
}
// If you set the inheritance to private, all methods and variables inherited become private within the class
