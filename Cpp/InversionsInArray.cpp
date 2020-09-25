// Problem is to find the count of inversion in array
// meaning find a[i] > a[j] and i < j

// Method 1
// 1.Iterate over each pair and find the count
// Time complexity : O(n2);
// Space complexity : O(n);


// Method 2
// While merging just check for smaller value in j and include all the left array elements
// Time complexity : O(nlogn);
// Space complexity : O(n);

#include <bits/stdc++.h>
using namespace std;
int count1=0;

void mergeArray(int *arr,int l,int mid,int h){

    int i=0;
    int j=0;
    int k=l;

   int left[mid-l+1];
   int right[h-mid];

   for(int i=0;i<mid-l+1;i++){
       left[i] = arr[l+i];
   }
   for(int j=0;j<h-mid;j++){
       right[j] = arr[mid+1+j];
   }

    while(i<mid-l+1 && j < h - mid){
        if(left[i] <right[j]){
            arr[k] = left[i];
            k++;
            i++;
        }
        else{
            arr[k] = right[j];
            k++;
            j++;
            count1 += (mid-l+1)-i;
        }
    }

    while(i < mid-l+1){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < h-mid){
        arr[k] = right[j];
        j++;
        k++;
    }

}

void mergeSort(int *arr,int l,int h){                     // Best Case : O(nlogn)
    if(l<h){                                              // Average Case : O(nlogn)
    int mid = l + (h-l)/2;                                 // Worst Case : O(nlogn)
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    mergeArray(arr,l,mid,h);
    }
}

int main(){
    cout<<"Enter array ele"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    mergeSort(arr,0,n-1);
    cout<<count1;
    return 0;
}