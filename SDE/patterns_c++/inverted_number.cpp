/* Inverted number pattern */
#include<iostream> 
using namespace std;

int main(){
    int nr=0;
    cout<< "Enter the number of rows to be printed- "<< endl;
    cin >> nr;

    for (int i=0;i<nr;i++){
        for (int j=1;j<nr-i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}