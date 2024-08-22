#include <iostream>

using namespace std;

void FindCoords(int x, int y) {
    cout << "The coordinate point (" << x << "," << y << ") lies in the ";

    if (x >= 0 && y >= 0) {
        cout << "first quadrant.";
    } else if (x < 0 && y >= 0) {
        cout << "second quadrant.";
    } else if (x < 0 && y < 0) {
        cout << "third quadrant.";
    } else {
        cout << "fourth quadrant.";
    }

    cout << endl;
}

int main() {
    int x, y;
    cout << "Enter x and y coordinates (e.g., -5 -6): ";
    cin >> x >> y;

    FindCoords(x, y);

    return 0;
}
