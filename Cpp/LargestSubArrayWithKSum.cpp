/*
Sliding window technique
Dynamic window sliding

Problem is to find out the  smallest subarray with sum equal to or greater(/smaller) than some value 'val';

*/

#include <bits/stdc++.h>
using namespace std;

void MaximumLengthSubarray(vector<int> arr,int val){


    int start = 0;
    int len = 0,maxlen = INT_MAX;
    int sum =0;

    for(int i=0;i<arr.size();i++){

        sum += arr[i];

        while(sum >= val){
            len = i - start +1;
            if(len < maxlen){
                maxlen = len;
            }

            sum -= arr[start];
            start++;
        }

    }

    cout<<maxlen<<endl;;
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
    MaximumLengthSubarray(arr,9);
    return 0;
}