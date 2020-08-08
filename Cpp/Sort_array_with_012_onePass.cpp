#include <bits/stdc++.h>
using namespace std;

void onePassSort(int *arr,int n){
    cout<<"in"<<endl;
    int low = 0;
    int high = n-1;
    int mid = 0;
/*   while(low <= high && count < 12){
        mid = low + (high-low)/2;
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            count++;
        }                                                 This algo loops too lot i.e. u dont know where to stop
        else if(arr[mid] == 2){                           output is as expected but number of iterations might be more when u 
            swap(arr[mid],arr[high]);                     start mid as center, instead take mid as first element
            high--;
            count++;
        }
        else if(arr[mid] == 1){
            if(arr[low] == arr[high] && arr[high] == 1){
                if(arr[low] != arr[low+1])
                swap(arr[low],arr[low+1]);
                else{
                    swap(arr[high],arr[high-1]);
                }
            }
            else{
            if(arr[low] == 0){
                low++;
                count++;
            }
            else if(arr[low] == 2){
                swap(arr[mid],arr[low]);
            }
            if(arr[high] == 2){
                high--;
                count++;
            }
            else if(arr[high] == 0){
                swap(arr[mid],arr[high]);
            }
            }
        }
                cout<<low<<" "<<high<<endl;
    }
    */                                          // Navie approach may be sorting things
                                                 // Another approach is using counting sort method 
   while(mid <= high){                           // i.e. counting number of 1 and 0 and 2 and putting them in smae array but
        if(arr[mid] == 0){                      // is not a one pass solution
            swap(arr[mid],arr[low]);           // ** This approach is called as Dutch National Flag Algorithm
            mid++;                            
            low++;
        }
        else if(arr[mid] == 1)
        { 
           mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
        
   }
    

    for(int i=0;i<12;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    cout<<"Enter the number of array elements"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    onePassSort(arr,n);

    return 0;
}