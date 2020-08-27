#include <bits/stdc++.h>
using namespace std;

int MaximumSubarraySum(vector<int> arr){

    int sum=0;
    int maxS = INT_MIN;
    int m=0,n=0;

    for(int i=0;i<arr.size();i++){
        sum += arr[i];
        if(sum >= maxS){
            n = i;
        }
        maxS = max(maxS,sum);
        if(sum < 0){                      // if sum becomes then it wont be of any use 
            sum =0;
            m=i+1;
        }
    }
    cout<<"Start: "<<m<<" End: "<<n<<endl;
    return maxS;
}

int main(){

    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    cout<<MaximumSubarraySum(arr);

    return 0;
}
