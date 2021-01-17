#include <iostream>
using namespace std;

void function2(); // function signature
// each function must be declared before it is ever used
void function(){
	cout <<"Entered function\n";
}

void printName(string x){
	cout << x<<"\n";
}
int main(){
	function();
	function2();
	printName("Larry");
}

void function2()
{
	cout << "Entered function\n";
}