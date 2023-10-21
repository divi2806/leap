#include<iostream>

using namespace std;

int main(){

    int n;
    cout <<"Enter the number of rows-";
    cin >> n;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout << j;
        }
        for (int j=i+1;j<=n;j++){
            cout << " ";
        }
        for (int j=n;j>i;j--){
            cout << " ";
        }
        for (int j=i;j>0;j--){
            cout << j;
        }

        cout << endl;

    }
}