/*Palindromic pattern*/

#include<iostream> 
using namespace std;

int main(){
    int nr=0;

    cout << "Enter the number of rows- ";
    cin>> nr;

    for (int i=0;i<nr;i++){
        for (int j=1;j<nr-i;j++){
            cout << " ";
        }

        for (int k=i+1;k>0;k--){
            cout << k ;
        }

        if (i>=1){
            for (int l=2;l<=i+1;l++){
                cout << l;
            }
        }
        cout << endl;
    }
}