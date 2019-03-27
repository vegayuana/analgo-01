#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *yp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i , j;
    for(i = 0;i<n-1;i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j]>arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
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
    int n = sizeof(arr)/sizeof(arr[0]);
    createArray(arr,n);

    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    bubbleSort(arr, n);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>( t2 - t1 ).count();
    cout<<endl <<duration <<" microseconds" <<endl;
    return 0;
}
