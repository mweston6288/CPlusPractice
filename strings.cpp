#include <iostream>
using namespace std;
/*
	without using namespace std, declaring a string requires std::string
*/
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
	// cin can get a string but only the first word. SPaces are terminators
	getline(cin, fullName); // this will get a line rather than a single word
	cout << fullName;
}