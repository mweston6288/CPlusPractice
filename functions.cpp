#include <iostream>
using namespace std;

void function2(); // function signature
// each function must be declared before it is ever used
void function(){
	cout <<"Entered function\n";
}
// parameters can have a default value if none is passed in
// C++ does not skip over the default if there are more parameters
void printName(string x = "No one"){
	cout << x<<"\n";
}
int add(int x, int y){
	return x+y;
}
// pass-by-reference uses reference values rather than pointers
void swapNum(int &x, int &y){
	int z = x;
	x = y;
	y = z;
}
int main(){
	function();
	function2();
	printName();
	printName("Larry");
	cout << add(2,3)<<endl;
	int x = 5, y = 6;
	swapNum(x, y); // you can just pass a variable rather than its memory address in pass-by-reference
	// There is a default swap() function in C++
	cout << x<<" "<<y<<endl;
}

void function2()
{
	cout << "Entered function\n";
}