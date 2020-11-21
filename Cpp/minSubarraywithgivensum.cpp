/*

Given an array of integers and a number x, find the smallest subarray with sum greater than the given value.
Examples:
arr[] = {1, 4, 45, 6, 0, 19}
   x  =  51
Output: 3
Minimum length subarray is {4, 45, 6}

*/

#include<bits/stdc++.h>
using namespace std;

void MinLengthSubArray(int *arr,int x){

    int n = 5;
    int i =0;
    int j = 0;
    int sum = 0;
    int min = INT_MAX;

    while(i < n){

        while(sum <= x && i < n){
            sum += arr[i];
            i++;
        } 

        while(sum > x && j < n){
            if(i - j < min){
                min = i-j;
            }
            sum -= arr[j];
            j++;

        }

    }

    if(min == n+1){
        cout<<"not possible"<<endl;
    }else{
    cout<<min<<endl;
    }

}

int main(){

    int arr[5] = {2,7,53};
    int x = 3;
    MinLengthSubArray(arr,x);
    return 0;
}