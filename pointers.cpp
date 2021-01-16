#include <iostream>
using namespace std;

int main(){
	string food = "Pizza";
	string &meal = food;
	cout << food<<"\n";
	cout<<meal<<"\n";
	int x = 5;
	int &y = x;
	cout << x << "\n";
	cout << y << "\n";
}