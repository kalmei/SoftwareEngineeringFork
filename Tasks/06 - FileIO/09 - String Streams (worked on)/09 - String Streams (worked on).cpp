#include <iostream>
#include <sstream>
using namespace std;


int main() {

	string nextWord;
	string sentence = "May the force be with you. " \
					  "Always. Ok, maybe that's asking too much. " \
					  "How about 3 days-a-week with time off for birthdays?";
	cout << sentence << endl << endl;

	istringstream iss(sentence);
	int count = 0;

	while (!iss.eof()) {
		iss >> nextWord;
		if (iss.fail()) {
			continue;
		}
		count++;
		cout << nextWord << endl;
		if (nextWord == "Always.") {
			cout << endl;
		}
	}
	cout << endl << "Total word count = " << count << endl;
	return 0;
}