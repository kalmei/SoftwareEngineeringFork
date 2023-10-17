#include <iostream>
using namespace std;




void displayBanner(int strLength) {
	for (int n = 0; n < (strLength + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

int main() {
	const string message = "Welcome to Computer Science 1000.";
	int L = message.length();

	displayBanner(L);
	cout << "* " << message << " *" << endl;
	displayBanner(L);


	return 0;
}