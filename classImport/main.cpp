#include "myClass.h" // import the header file
using namespace test;

int main(){
	myClass t;
	t.method();
}
/*
	When compiling, each .cpp file must be included in g++.
	One option is to use *.cpp to pull all cpp files
	g++ *.cpp
*/