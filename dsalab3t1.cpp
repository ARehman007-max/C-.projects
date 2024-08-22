#include <iostream>
using namespace std;

int main()
 {
    int pak1, pak2, pak3, pak4;


    cout << "Enter the array size: ";
    cin >> pak1;

    if (pak1<= 0) 
	{
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1;
    } 
    int arr[pak1];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < pak1; i++) 
	{
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }


    cout << "Enter the element to be inserted: ";
    cin >> pak4;


    cout << "Enter the position (index) to insert the element: ";
    cin >> pak3;

    if (pak3< 0 || pak3 > pak1) {
        cout << "Invalid position. Position must be between 0 and " << pak1 << "." << endl;
        return 1;
    }


    for (int i = pak1; i > pak3; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pak3] = pak4;
    pak1++;

 
    cout << "New array after insertion:" << endl;
    for (int i = 0; i < pak1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
