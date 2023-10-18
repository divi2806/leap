/*Rhombus pattern*/


#include<iostream> 
using namespace std;

int main(){
    int nr=0;

    cout << "Enter the number of rows -";

    cin >> nr;

    for (int i=0;i<nr;i++){
        for (int j=1;j<nr-i;j++){
            cout << " ";
        }

        for (int k=0;k<nr;k++){
            cout << "* ";
        }

        cout << endl;
    }
}