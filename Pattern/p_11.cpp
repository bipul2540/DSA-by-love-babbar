#include<iostream>
using namespace std;


int main(){


    int n;
    cin >> n;


    char ch = 'A';

    for(int i = 0; i<n; i++){
        char val = ch;
        for(int j = 0 ;j<n ;j++){

            cout << val << " ";
            val++;
        }

        ch++;
        cout << endl;
    }
}