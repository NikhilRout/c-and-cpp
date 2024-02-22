#include <iostream>
#include <string>

using namespace std;

template<class T>
void genericSort(T *arr, int size){
    //bubble sort
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size-i-1; j++){
            if (arr[j] > arr[j+1]){
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main(){
    int arr[] = {5, 4, 3, 2, 1};
    genericSort(arr, 5);
    for (int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    float arr2[] = {3.4, 99.2, -12.4, -2.6, 1.99, 0};
    genericSort(arr2, 6);
    for (int i = 0; i<6; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    string arr3[] = {"abc", "def", "ghi", "jkl", "mno", "aaa"};
    genericSort(arr3, 6);
    for (int i = 0; i<6; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}