#include <iostream>
#include < string>
using namespace std;

int L;

void displayBanner() {
	

	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

int main() {
	const string message = "Hello and Welcome to Computer Science 1000.";
	int L = message.length();
	displayBanner();
	cout << "* " << message << " *" << endl;
	displayBanner();
	return 0;
}