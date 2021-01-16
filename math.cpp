#include <iostream>
using namespace std;

int main(){
	int x = 50;
	int y =10;
	// min() and max() don't need cmath
	cout << min(x,y) << " " << max(x,y) << "\n";
	/*
		Just found out concatanating stringsd does not play well with functions.
		min(x,y) + " " caused problems, but min(x,y)<<" " was fine
	*/
}