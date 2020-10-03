#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int mini = INT_MAX;
        for(int i=0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            profit = max(profit,prices[i]-mini);
        }
        
        return profit;
        
}

int main(){


    cout<<"enter number of ele"<<endl;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxProfit(arr);
    return 0;

}