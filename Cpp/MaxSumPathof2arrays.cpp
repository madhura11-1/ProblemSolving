/*

    Given two sorted arrays, such that the arrays may have some common elements. Find the sum of the maximum sum path to reach from the beginning of any array to end of any of the two arrays. We can switch from one array to another array only at common elements. 
    Note: The common elements do not have to be at the same indexes.
    Expected Time Complexity: O(m+n), where m is the number of elements in ar1[] and n is the number of elements in ar2[].


Input: ar1[] = {2, 3, 7, 10, 12, 15, 30, 34}
        ar2[] = {1, 5, 7, 8, 10, 15, 16, 19}
Output: 122

Explanation: 122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34

*/


#include <bits/stdc++.h>
using namespace std;


void maxSumPathof2arrays(vector<int> arr1,vector<int> arr2){

    int result = 0,sum1= 0,sum2 = 0;

    int i=0,j=0;

    while(i < arr1.size() && j < arr2.size()){

        if(arr1[i] < arr2[j]){
            sum1 += arr1[i];
            i++;
        }

        else if(arr1[i] > arr2[j]){
            sum2 += arr2[j];
            j++;
        }

        else{

            result = max(sum1,sum2);
            sum1 = result;
            sum2 = result;

            int temp = i;
            while (i < arr1.size() && arr1[i] == arr2[j])
                sum1 += arr1[i++];
 
            while (j < arr2.size() && arr1[temp] == arr2[j])
                sum2 += arr2[j++];

            result = max(sum1,sum2);
            sum1 = result;
            sum2 = result;
            
        }

    }

    if(result == 0 && sum1 != 0 && sum2 != 0){        // this condition for test case : arr1 = {1,3,5,7,8,9} arr2 = {2,4,6};    
        if(j >= arr2.size()){
            result = sum1;
        }
        else if(i >= arr2.size()){
            result = sum2;
        }
    }

    while(i < arr1.size()){
        result += arr1[i];
        i++;
    }

    while(j < arr2.size()){
        result += arr2[j];
        j++;
    }

    cout<<result<<endl;


}

int main(){

    vector<int> arr1 = {1,3,5,7,8,9};
    vector<int> arr2 = {2,4,6};
    maxSumPathof2arrays(arr1,arr2);
    return 0;

}