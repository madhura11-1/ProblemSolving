/*

Given an array arr[] and a positive integer K.
The task is to count the total number of pairs in the array whose absolute difference is divisible by K.

Input: arr[] = {1, 2, 3, 4}, K = 2
Output: 2
Explanation:
Total 2 pairs exists in the array with absolute difference divisible by 2.
The pairs are: (1, 3), (2, 4).


*/
#include <bits/stdc++.h>
using namespace std;

void countPairs(vector<int> arr,int k){
    int count = 0;
    vector<int> hash(k,0);

    for(int i=0;i<arr.size();i++){
        arr[i] = (arr[i] + k) % k;
    }

    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<hash.size();i++){
        count += (hash[i] * (hash[i] - 1))/2;
    }

    cout<<count<<endl;

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
    cout<<"Enter the k"<<endl;
     int m;
     cin>>m;
    countPairs(arr,m);
    return 0;
}