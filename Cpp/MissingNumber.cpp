/*

Given a sequential input of integers in an array, find the missing number.

Test Case:  I was given 76 77 79 80 81 as an array input and was expected to return 78.  

Expected time complexity: O(logn)

(Another variant is find the missing number from the sorted array of size N where numbers range from 1 to N)
Here only check if arr[mid] == mid + 1, if not then search left else search right.

*/

#include <bits/stdc++.h>
using namespace std;

void MissingNumber(vector<int> arr){

    int l =0;
    int h = arr.size()-1;
    int start = arr[0];

    while(l <= h){
        int mid = (l+h)/2;

        if(arr[mid] != start + mid && arr[mid-1] == start + mid-1){
            cout<<start + mid;
            break;
        }

        if(arr[mid] != start + mid){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }


}

int main(){

    cout<<"Enter the number of array ele"<<endl;
    int n;
     cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
    MissingNumber(arr);
    return 0;
}