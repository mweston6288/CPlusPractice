#include <iostream>
using namespace std;

int main(){
	string firstName = "John ";
	string lastName = "Doe";
	string fullName = firstName+lastName; // can concat strings
	fullName = firstName.append(lastName); // strings are objects with functions
	cout << fullName<< "\n";
	cout << fullName.length()<<"\n";// .length() returns string length
	cout << fullName[2]<<"\n"; // access chars as array
	fullName[0] = 'Q'; // change a char in the string
	cout << fullName << "\n";
}