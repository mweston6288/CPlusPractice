#include <iostream>
using namespace std;

int main(){
	/*
		&variableName references another variable
		printing it prints the value of the referenced variable
	*/
	string food = "Pizza";
	string &meal = food;
	cout << food<<"\n";
	cout<<meal<<"\n";
	int x = 5;
	int &y = x;
	cout << x << "\n";
	cout << y << "\n";
	// changing a variable also changes the value of any variable referencing it
	x = 7;
	cout << y << "\n";

	// When not declaring a variable, & refers to the variable's memory address
	cout << &meal<<"\n";
}