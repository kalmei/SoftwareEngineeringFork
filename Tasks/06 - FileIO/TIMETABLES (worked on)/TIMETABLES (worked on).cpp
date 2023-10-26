#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ofstream os;

	os.open("tables.txt");

	if (os.is_open() == false) {
		cerr << "Cannot create file" << endl;
		return -1;
	}

	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			os << r * c << "\t";
		}
		os << endl;
	}
	os << endl;

	os.close();
	return 0;
}
