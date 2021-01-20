#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// Create a file writer
	// If filename does not exist, it makes it. Erases any content in the file
	ofstream MyFile("filename.txt");

	MyFile << "Input2\n input";

	MyFile.close();

	string text;
	// open a file. If file does not exist, nothing happens
	ifstream MyReadFile("filename.txt");
	// getline will read the next line in the ifstream and copy it into a string
	 while (getline(MyReadFile, text)){
		 cout << text<< endl;
	 }

	 MyReadFile.close();
}