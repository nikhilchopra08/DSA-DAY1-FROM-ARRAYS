#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,23,4,56,4};

    int size = 5;
    int sum = 0;
    cout<< endl << sum << endl;
    for(int i = 0 ; i < size ; i++){
        sum = sum + arr[i];
    }
    cout<< sum;
}