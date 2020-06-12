#include <iostream>

using namespace std;

/***Function Prototypes***/
void Problem1();
void Problem2();
void Problem3();
/*************************/


int main() {
    Problem3();
    Problem2();
    Problem1();
}

/* Completed:  */
bool Prime(int n) {
    for (int i = 0; i < n; i++) {
        if (n%i==0)
            return false;
    }
    return true;
}
void Problem3() {

}

/* Completed: Friday, June 12 */
void Problem2() {
    cout << "Begin P2" << endl;
    int num1 = 1;
    int num2 = 1;
    int sum = 0;
    while (num1<4000000 && num2<4000000) {
        if (num1%2==0) {
            sum+=num1;
        }
        int temp = num1;
        num1 = num2;
        num2 += temp;
    }
    cout << "Sum: " << sum << endl;
    cout << "End P2" << endl << endl;
}


/* Completed: Friday, June 12 */
void Problem1() {
    cout << "Begin P1" << endl;
    int num1 = 3;
    int num2 = 5;
    int num3 = 1000;
    int sum = 0;
    for (int i = 1; i < num3; i++) {
        if (i%num1 == 0 || i%num2 == 0)
            sum += i;
    }
    cout << "Sum: " << sum << endl;
    cout << "End P1" << endl << endl;
}
