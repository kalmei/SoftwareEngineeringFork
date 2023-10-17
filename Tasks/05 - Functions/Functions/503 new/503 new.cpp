#include <iostream>
using namespace std;

void displayBanner(int strLength);
void displayWithinBanner(string message);


int main() {
	const string title = "Welcome to Compuer Science 101.";

	displayWithinBanner(title);

	return 0;

}
void displayBanner(int strLength) {
	for (int n = 0; n < (strLength + 4); n++) {
		cout << "*";
	}
	cout << endl;
}


void displayWithinBanner(string message) {
	int L = message.length();
	displayBanner(L);
	cout << "* " << message << " *" << endl;
	displayBanner(L);

}
