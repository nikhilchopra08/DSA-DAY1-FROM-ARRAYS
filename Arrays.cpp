#include <iostream>

using namespace std;

void printArray(int arr[] , int size){
    cout<< "printing array" << endl;
    for(int i = 1 ; i <size ; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl <<  "DONE PRINTING" <<endl;
}

int main()
{
    // declare
    int number[15];

    // accessing array element
    cout << "Value of 1th index " << number[0] << endl;

    cout << "value of 14 index " << number[13] << endl;

    // initialising 2nd array
    int second[3] = {3, 4, 5};
    // accessing array element
    cout << "Value of 2th index " << second[2] << endl;

    int third[15] = {2,3,4,5,64,4};
    int n = 15;
    cout << "printing the array"<< endl;
    for (int i = 0; i< n; i++){
        cout<< third[i] << " " ;
    }
    cout << endl;

    int fourth[12] = {0};
    int x = 12;
    printArray(fourth , x);

    //for getting size of array;
    int fourthSize = sizeof(fourth)/sizeof(int);
    cout<< endl << "Size of fourth is "<< fourthSize << endl;

    char ch[5] = {'a' , 'b' , 'd' , 'e' , 'f'};
     cout<< "printing array" << endl;
    for(int i = 1 ; i <5 ; i++){
        cout<< ch[i] << " ";
    }
    cout<< endl <<  "DONE PRINTING" <<endl;

    double firstDouble[5];
        bool firstBool[5];
            float firstfloat[5];

    cout << endl
         << "Everything is fine" << endl;
}