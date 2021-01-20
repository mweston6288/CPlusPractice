#include <iostream>
using namespace std;

// You can only pass one thing in a throw
// Construct an Exception class if you need to pass multiple values
class MyException{
	public:
		int x;
		char c;
		MyException(int x, char c){
			this->x = x;
			this->c = c;
		}
};

int main(){
	int x = 40;
	
	try{
		if (x == 40){
			// You can throw any variable type as an exception
			throw(40);
		}
		cout << "No issues\n";
	// First catch block that accepts parameters will run
	}catch(char c){
		cout << c << endl;
	}
	// this will catch anything but parameter cannot be assigned
	catch (...){
		cout << "Broken" << endl;
	}
	try{
		throw MyException(5, 'c');
	}catch(MyException e){
		cout << e.x<<" "<<e.c<<endl;
	}
}