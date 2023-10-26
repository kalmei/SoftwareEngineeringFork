#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ofstream operation;
	operation.open("myfile.txt");

	if (!operation.is_open()) {
		cerr << "Problem with file!!" << endl;
		return -1;
	}

	operation << "Hello Comp1000 students!" << endl << "Be sure to remember this in regards to attendance." << endl << "Module ID: " << 1000 << endl << endl;
	operation.close();

	operation.open("myfile.txt", ios::app);
	if (!operation.is_open()) {
		cerr << "Problem with file!!" << endl;
		return -1;
	}
	operation << "Greetings Comp1001 Students!" << endl << "Be sure to remember this in regards to attendance." << endl << "Module ID: " << 1001 << endl << endl;
	operation.close();
	return 0;
}