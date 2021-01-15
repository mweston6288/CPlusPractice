#include <iostream>
using namespace std;

int main(){
	int x, z; // can declare multiple of same variable
	double y;
	char c;
	string s; // string are default variables in C++;
	bool b;
	x = 50;
	z = 5;
	y = 4.7;
	c = 'x';
	s = "Hello World!";
	b = true;
	cout << x << " " << s<< endl; // use << when transitioning between string literal and variable
	cout << 2*z; // can do math

	const int num = 15; // const cannot be changed
}