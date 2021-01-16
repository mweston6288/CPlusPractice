#include <iostream>
using namespace std;

int main(){
	string cars[4] = {"Opel", "Volvo", "Ford", "Mazda"};
	cout << cars[0];
	cars[2] = "BMW";
	cout << cars[2];
	for (int i = 0; i < 4; i++){
		cout << cars[i]<<endl;
	}
	/*
		can also declare arrays without setting size
		int num[] = {1, 2, 3};
		THis will set the size to 3;
		int num[5] = {1,2,4};
		THis will set the array size to 5 and the last two elements can be filled later
	*/
}