#include<iostream>
using namespace std;

void Update(int arr[] , int n){
    cout<< "Printing inside the function" << endl << endl;
    //print the array

    arr[0] = 80;
    for(int i = 0; i < 3; i++){
        cout<< arr[i] << " ";
    }
    cout << endl << "Printing in Main function" << endl;
}

int main(){
    int arr[3] = {4,6,2};

    Update(arr , 3);

    //print the array
    for(int i = 0; i < 3; i++){
        cout<< arr[i] << " ";
    }
}

