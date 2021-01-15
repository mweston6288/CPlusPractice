#include <iostream>
using namespace std;

int main(){
	int x, y;
	cout << "Type a number\n";
	cin >> x; // take user input; does not confirm type match
	cout << x <<"\n"; 
	cout << "type another number\n";
	cin >> y;
	cout << "Smm: "<< x+y<<"\n";
}