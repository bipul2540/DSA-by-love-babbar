#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    int count = 1;
    
   for(int i = 0; i <n; i++){
    

    cout << count << " ";
    count ++;
    int val = count;

    for(int j = i ; j>0 ;j--){
       cout << val << " ";
       val++;
    }

    cout << endl;

   }
}