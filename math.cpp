#include <iostream>
using namespace std;
#include <cmath>
/*
	cmath includes rounding square and cube roots, trig functions, log, absolute value
	There are special functions for floats like fmax(), fabs(), etc
*/
int main(){
	int x = 50;
	int y =10;
	// min() and max() don't need cmath
	cout << min(x,y) << " " << max(x,y) << "\n";
	/*
		Just found out concatanating stringsd does not play well with functions.
		min(x,y) + " " caused problems, but min(x,y)<<" " was fine
	*/
	cout << sqrt(63)<<endl;
	cout << round(2.4);
}