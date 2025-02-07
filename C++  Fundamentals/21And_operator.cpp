#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number." << endl;
    cin >> n;

    if ((n % 2 == 0) && (n % 3 == 0) && (n % 5 == 0)) {
        cout << "Number is divided by 2, 3, and 5." << endl;
    } else if ((n % 2 == 0) && (n % 3 == 0)) {
        cout << "Number is divided by 2 and 3." << endl;
    } else if ((n % 2 == 0) && (n % 5 == 0)) {
        cout << "Number is divided by 2 and 5." << endl;
    } else if ((n % 3 == 0) && (n % 5 == 0)) {
        cout << "Number is divided by 3 and 5." << endl;
    } else {
        cout << "Number is not divided by 2, 3, and 5." << endl;
    }

    return 0;
}