#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;


void swap(int *xp,int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[],int n)
{

    int i , j ,min_idx;

    for(i = 0;i<n-1;i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}
void createArray(int A[] , int size){
    for(int i = 0; i < size ; i++){
        A[i] = size - i;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{   cout<<"50000 Data";
    int arr[50000] ;
    int n = sizeof(arr)/sizeof(arr[0]);
    createArray(arr,n);

    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    selectionSort(arr, n);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>( t2 - t1 ).count();
    cout<<endl <<duration <<" microseconds" <<endl;

    return 0;
}
