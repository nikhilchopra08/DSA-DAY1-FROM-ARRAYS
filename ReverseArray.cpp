#include<iostream>

using namespace std;

void reverse(int arr[] , int n){
    int start = 0;
    int end = n -1;

    while(start < end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

    cout << "reversed" << endl;
}

void print(int arr[] , int n){
    for (int i = 0; i< n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {2,3,4,3,2,4};
    int brr[5] = {3,54,43,24,6};

    print(arr , 6);
    print(brr , 5);

    reverse(arr , 6);
    reverse(brr , 5);

    print(arr , 6);
    print(brr , 5);
}