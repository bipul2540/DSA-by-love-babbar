#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << ch <<  " ";
        }

        ch++;
        cout << endl;
    }
}