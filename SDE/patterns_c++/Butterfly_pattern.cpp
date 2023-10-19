/*Butterfly pattern*/

#include<iostream>
using namespace std;

int main(){

    int nr=0;
    cout << "Enter the number of rows-";
    cin >> nr;

    if (nr%2==0){
        for (int i=0;i<nr;i++){
            for (int j=0;j<2*nr;j++){
                if (j<=i){
                    cout << "*";
                }else if(j>=2*nr-i-1){
                    cout << "*";
                }
                else {
                    cout <<" ";
                }
            }
            cout << endl;
        }
        for (int i=0;i<nr;i++){
            for (int j=0;j<nr;j++){
                if (i>=nr-j){
                    cout << " ";
                }else{
                    cout <<"*";
                }
            }
            for (int j=0;j<nr;j++){
                if (j<i){
                    cout << " ";
                }else{
                    cout <<"*";
                }
            }
            cout << endl;
        }
    }else{
        for (int i=0;i<nr;i++){
            for (int j=0;j<2*nr;j++){
                if (j<=i){
                    cout << "*";
                }else if(j>=2*nr-i-1){
                    cout << "*";
                }
                else {
                    cout <<" ";
                }
            }
            cout << endl;
        }
        for (int i=1;i<nr;i++){
            for (int j=0;j<nr;j++){
                if (i>=nr-j){
                    cout << " ";
                }else{
                    cout <<"*";
                }
            }
            for (int j=0;j<nr;j++){
                if (j<i){
                    cout << " ";
                }else{
                    cout <<"*";
                }
            }
            cout << endl;
        }
    }
}