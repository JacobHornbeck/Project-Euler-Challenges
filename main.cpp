#include <iostream>

using namespace std;

/***Function Prototypes***/
void Problem1();
void Problem2();
/*************************/


int main() {
    Problem1();
}



/* Completed Friday, June 12 */
void Problem1() {
    cout << "Problem1 - Begin" << endl;
    int num1 = 3;
    int num2 = 5;
    int num3 = 1000;
    int sum = 0;
    for (int i = 1; i < num3; i++) {
        if (i%num1 == 0 || i%num2 == 0)
            sum += i;
    }
    cout << "Sum: " << sum << endl;
    cout << "Problem1 - End" << endl << endl;
}
