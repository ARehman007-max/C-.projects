#include <iostream>
using namespace std;

int main() {
    int seconds;

    cout << "Enter the number of seconds elapsed: ";
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remainingSeconds = seconds % 60;

    cout << "The result is: " << hours << " hours, " << minutes << " minutes, and " << remainingSeconds << " seconds." << endl;

    return 0;
}
