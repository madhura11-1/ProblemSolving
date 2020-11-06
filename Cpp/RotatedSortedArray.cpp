/* Problem Statement: 
   Given a rotated array by k positions . Find that k

   use binary search to find that rotated point first and then just count
*/


#include <bits/stdc++.h>
using namespace std;

void rotatedSortedArray(vector<int> arr){

    int l = 0;
    int h = arr.size() -1;
    while(l < h){
        if(arr[l] < arr[h]){
            cout<<"0"<<endl;
            break;
        }
        else{

            int mid = l + (h-l)/2;
            if(arr[mid]  > arr[mid + 1]){
                cout<<arr[mid+1]<<endl;
                cout<<"count "<<(arr.size() - (mid+1))<<endl;
                break;
            }
            else if(arr[mid] > arr[h]){
                l = mid+1;
            }
            else{
                h = mid;
            }
        }
        

    }

}

int main(){
    vector<int> arr;
    cout<<"enter the number of ele"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }

    rotatedSortedArray(arr);
}
