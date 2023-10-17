#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;


int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    cout << input[input.find("\"42\"")];
    cout << input[input.find("\"42\"") + 1];
    cout << input[input.find("\"42\"") + 2];
    cout << input[input.find("\"42\"") + 3];
        cout << endl << endl;


    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    int count = 0;
    while (iss >> word) { //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
        if (word == "the") {
            count++;

        }
        

    }
    cout << "the number of times \"the\" was used is " << count << endl;
    cout << endl << endl;
    //Challenge 3 
    //commented lines are for using second array.

    int nums[6] = { 1, 2, 3, 4, 5, 6 };
    int newNums[6];
    int temp;
    for (int i = 0; i < 6; i++) {
        if (nums[i] < nums[i + 1]) {
            temp = newNums[i];
            //temp = nums[i];
            nums[i] = nums[5 - i];
            nums[5 - i] = temp;
        }
    }
    cout << "{";
    for (int i = 0; i < 6; i++) {
        //cout << nums[i] << " , ";
        cout << newNums[i] << " , ";
    }
    cout << "}" << endl;
    return 0;
  

}

