#include<iostream>
using namespace std;
int main()
{
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    string s = to_string(n);
    char sep = ' ';

    cout << "Digits in reverse order with separator: ";
    
    for (int i = s.length() - 1; i >= 0; i--) {
        cout << s[i] << (i > 0 ? sep : '\n');
    }

    return 0;
}






