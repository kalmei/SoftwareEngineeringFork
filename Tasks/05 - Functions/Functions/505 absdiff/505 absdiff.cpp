#include <iostream>
using namespace std;

int absDiff(int var1, int var2) {
	int diff;
	if (var1 >= var2) {
		 diff = var1 - var2;
	}
	else {
		 diff = var2 - var1;
	}
	return diff;
	
}


int main() {
	int a,b;
	int trueDiff;
	cout << endl << "Enter var1 -> ";
	cin >> a;
	cout << endl << "Enter var2 -> ";
	cin >> b;
	trueDiff = absDiff(a, b);
	cout << "absDiff = " << trueDiff << endl;

	return 0;
}