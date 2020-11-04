/*

Problem is to find out the largest subsequence in the array whose sum = 0

we can also use a hashmap to find it.

*/

#include <bits/stdc++.h>
using namespace std;

void LargestSubarray(vector<int> &arr){

  /*  int sum = arr[0];
    int start =0;
    int maxlen = INT_MIN;
    for(int i=1;i<arr.size();i++){

        sum += arr[i];
        while(sum <= 0){
            if(sum == 0){
                maxlen = max(maxlen,(i-start + 1));
            }
            i++;
            sum += arr[i];
        }                                                   Cannot use this as fails for 1,2,3,-6,7,1
        if(sum >0){
            sum -= arr[start];
            start++;
        }

    }

    cout<<maxlen;
    */

   int sum = 0;
   int maxlen = 0;
    map<int,int> abc;

   for(int i=0;i<arr.size();i++){

       sum += arr[i];

        if(sum == 0){
            maxlen = i + 1;
        }
        else{
       if(abc.find(sum) != abc.end()){
           map<int,int> :: iterator it;
           it = abc.find(sum);
           maxlen = max(maxlen,i - it->second);
       }
       else{
           abc.insert(sum,i);
       }

        }
   }

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
    LargestSubarray(arr);
    return 0;
}