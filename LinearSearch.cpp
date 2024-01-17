#include <iostream>

using namespace std;

bool Search(int arr[] , int n , int key){
    for (int i = 0; i < n;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int num[5] = {2,4,54,2,-32};

    //Whether number exist or not in array
    cout << "enter the number that we have to search" << endl;
    int key;
    cin >> key;

    bool exist = Search(num , 5 , key);

    if(exist){
        cout << "Exist"<< endl;
    }
    else{
        cout << "not exist";
    }
}
