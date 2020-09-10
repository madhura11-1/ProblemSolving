// The problem is to find the next permutation of the given series.
// consider lexicographical ordering 

// first method : you can find all the permutations and then searcg for given one's next

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(int *arr,int n){

int point = 0;
int pivot;
    for(int i = n-1;i>=1;i--){
        if(arr[i] > arr[i-1]){
            point = i-1;
            break;
        }
    }
    if(point != 0){
    for(int i = n-1;i >= point+1;i--){
        if(arr[i] > arr[point]){
            pivot = i;
        }
    }

    swap(arr[point],arr[pivot]);

    }

    reverse(arr+point+1,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter the number of elements in series"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nextPermutation(arr,n);
    
    return 0;
}