#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;

    char ch = 'A' + n;
    for(int i = 0 ;i<n; i++){
        char val = ch;
        for(int j = i ;j>=0; j--){
            cout << val << " ";
            val++;
        }
        ch--;
        cout << endl;
    }
}