#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    cout << "DSA lab03 task#02\n";
    for (int i = 0; i < 5; i++)
    {
        cout << rand() << " ";
    }
    int a;
    cout << "\nPlease enter any number : ";
    cout << "\nNumber = ";
    cin >> a;
    cout << "\nNow we check if the number is present in random numbers: ";
    bool numberFound = false;

    for (int b = 0; b < 5; b++)
    {
        int randomValue = rand(); 
        cout << "\nRandom number " << b << " = " << randomValue << " ";

        if (a == randomValue)
        {
            cout << "\nNumber is present in random numbers: ";
            cout << "The number is present at this index = " << b << endl;
            numberFound = true; 
            break; 
        }
    }

    if (!numberFound)
    {
        cout << "\nNumber is not present in random numbers :(" << endl;
    }

    return 0;
}
