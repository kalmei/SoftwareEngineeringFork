#include <iostream>
using namespace std;


void calculateSum(int numbers[10]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }
    cout << sum << endl;

}


int main() {

    int nums[10] = {12, 5, 77, 23, 102, 42, 98, 64, 17, 59};
    calculateSum(nums);


    return 0;
}


