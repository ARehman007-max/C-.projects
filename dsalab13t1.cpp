#include <iostream>

using namespace std;

int main() {
    const int numAges = 10;
    int ages[numAges];

    // Input for 10 ages
    for (int i = 0; i < numAges; ++i) {
        cout << "Enter age: ";
        cin >> ages[i];
    }

    // Check and print age ranges
    for (int i = 0; i < numAges; ++i) {
        if (ages[i] < 0) {
            cout << "Invalid age entered! Please enter a valid age." << endl;
            continue;
        }

        cout << "Valid age entered!" << endl;

        // Check and print age ranges
        if (ages[i] >= 25 && ages[i] <= 30) {
            cout << "Age is in the range 25-30." << endl;
        } else if (ages[i] >= 40 && ages[i] <= 50) {
            cout << "Age is in the range 40-50." << endl;
        } else if (ages[i] >= 35 && ages[i] <= 45) {
            cout << "Age is in the range 35-45." << endl;
        } else if (ages[i] >= 25 && ages[i] <= 45) {
            cout << "Age is in the range 25-45." << endl;
        }
    }

    return 0;
}
