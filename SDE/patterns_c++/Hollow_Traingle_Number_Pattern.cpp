/*Hollow pyramid pattern*/
#include<iostream>
using namespace std;

int main(){

    int nr=0;
    cout << "Enter the number of rows -";

    cin>> nr;

    for (int i=0;i<nr;i++){

        if (i==nr-1){
            for (int k=1;k<=nr;k++){
                cout << k <<" ";
            }
            break;
        }
        for (int j=1;j<nr-i;j++){
            cout << " ";
        }

        for (int k=1;k<=2*i+1;k++){
            if (k==1){
                cout << 1 ;
            }else if (k==2*i+1){
                cout << i+1;
            }else{
                cout <<" ";
            }
        }
        cout << endl;
    }

}
