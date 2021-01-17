#include <iostream>
using namespace std;

void function2(); // function signature
// each function must be declared before it is ever used
void function(){
	cout <<"Entered function\n";
}
// parameters can have a default value if none is passed in
void printName(string x = "No one"){
	cout << x<<"\n";
}
int main(){
	function();
	function2();
	printName();
	printName("Larry");
}

void function2()
{
	cout << "Entered function\n";
}