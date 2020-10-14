/*
Sliding window technique

Problem is to find out the  subarray with maximum sum of size k;

*/

#include <bits/stdc++.h>
using namespace std;


void MaxSum(vector<int> arr,int k){

    int sum =0;
    int maxSum = INT_MIN;
    int start = 0;
    for(int i=0;i<arr.size();i++){

        sum += arr[i];
        if(i >= k-1){

            if(sum > maxSum){
                maxSum = sum;
            }
            sum -= arr[start];
            start++;

        }

    }

    cout<<maxSum<<endl;

}

int main(){
    cout<<"Enter array ele number"<<endl;
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
    int p;
    cin>>p;
    arr.push_back(p);
    }
    MaxSum(arr,3);
    return 0;
}