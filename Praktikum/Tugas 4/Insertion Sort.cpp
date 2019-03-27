#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void createArray(int A[] , int size){
    for(int i = 0; i < size ; i++){
        A[i] = size - i;
    }
}

int main()
{
    cout<<"50000 Data";
    int arr[50000];
    int n = sizeof(arr) / sizeof(arr[0]);
    createArray(arr,n);

    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    insertionSort(arr, n);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>( t2 - t1 ).count();
    cout<<endl <<duration <<" microseconds" <<endl;

    return 0;
}
