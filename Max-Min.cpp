#include<iostream>

using namespace std;

// int getMax(int num[] , int n){

//     int max = INT_MIN;

//     for(int i = 0 ; i < n ; i++){
//         if(num[i] > max){
//             max = num[i];
//         }
//     }
//     return max;
// };

int getMax(int num[] , int n){

    int maxi = INT_MIN;

    for(int i = 0 ; i < n ; i++){
       maxi = max(maxi, num[i]);
    }
    return maxi;
};



// int getMin(int num[] , int n){

//     int min = INT_MAX;

//     for(int i = 0 ; i < n ; i++){
//         if(num[i] < min){
//             min = num[i];
//         };
//     }
//     return min;
// };

int getMin(int num[] , int n){

    int mini = INT_MAX;

    for(int i = 0 ; i < n ; i++){
        mini = min(mini , num[i]);
    }
    return mini;
};

int main(){
    int size;

    cout<< "size of array" << endl;
    cin >> size;

    int num[100];

    for(int i= 0 ; i < size; i++){
        cout << i+1 << "th element of the array";
        cin>> num[i];
    }

    cout << "Max value of element in array is " << getMax(num , size)<< endl;

    cout << "Min value of element in array is " << getMin(num , size)<< endl;
}