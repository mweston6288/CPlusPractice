#include <iostream>
using namespace std;

int main(){
	bool x = false;
	bool y = true;
	if (x){
		cout << "x is true\n";
	} else if (y){
		cout << "y is true\n";
	}
	else{
		cout << "x is false\n";
	}
	// cout does not work properly with ternaries without parenthesis 
	cout << (y ? "y is true\n" : "y is false\n");
}