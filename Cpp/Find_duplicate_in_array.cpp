// detect duplicate number in an aray of size n+1 where all elemnts lie from 1 to n;

//here u can apply traditional method like sort the array and find i and i+1 equal
//  complexity : time = O(nlogn) (merge sort) space = O(1)

// also u can use another array like a check array and go on marking 1 into that repective index
// time : O(n) space O(n)


// tis solution takes time : O(n) space ; O[1)
#include <bits/stdc++.h>
using namespace std;


void findDuplicate(int *arr){

    int slow =arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];                          // you move fast by 2 or 3 or 4 it will meet only the cycles will increase
    }while(arr[slow] != arr[fast]);

    fast = arr[0];
    while(arr[fast] != arr[slow]){
        slow = arr[slow];
        fast = arr[fast];
    }

    cout<<arr[slow];

}
int main(){

    int arr[10] = {2,5,5,6,9,3,8,9,7,1};
    findDuplicate(arr);
    return 0;
}