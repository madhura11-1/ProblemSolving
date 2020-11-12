/*

Given an input length, String array and burst length(>0) as input, the output should be an array which is a shrunk input array such that the sequentially
 repeating elements more than or equal to burst length should be removed. This has to be repeated till the array cannot be shrunk any further.
 Use single characters in the string array for simplicity as shown in sample test cases.


Method 1 : Using stack

Method 2 : Using sliding window (discussed in this page)

*/

#include <bits/stdc++.h>
using namespace std;

void ReduceString(string arr,int burst){

    int i=0;
    int j =1;
    int count = 0;

    while(i < arr.length()){

        if(i == arr.length()-1 && j >= arr.length()){                // even this condition can be removed or is unnecesssary
            cout<<arr[i]<<" ";
            break;
        }

        if(i < arr.length() && j >= arr.length() && count+1 >= burst){

            count = 0;
            break;
        }

        if(i < arr.length() && j >= arr.length() && count+1 < burst){

            cout<<arr[i]<<" ";
            i++;
        }
        else if(arr[i] != arr[j] && (j-i <= 1) && burst != 1){
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i] != arr[j] && (j-i > 1) && count+1 >= burst){
            i = j;
            j = i+1;
            count = 0;
        }
        else if(arr[i] != arr[j] && (j-i > 1) && count+1 < burst){
            cout<<arr[i]<<" ";
            i++;
        }
        else{
            j++;
            count++;
        }


    }

}

int main(){

    string arr = "abcdee";
    int burst = 1;
    ReduceString(arr,burst); 
    return 0;
}