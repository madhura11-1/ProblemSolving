/*

You have a RecentCounter class which counts the number of recent requests within a certain time frame.

Implement the RecentCounter class:

RecentCounter() Initializes the counter with zero recent requests.
int ping(int t) Adds a new request at time t, where t represents some time in milliseconds, and returns the number of requests that has happened in the past 3000 milliseconds (including the new request). Specifically, return the number of requests that have happened in the inclusive range [t - 3000, t].
It is guaranteed that every call to ping uses a strictly larger value of t than the previous call.

*/

#include <bits/stdc++.h>
using namespace std;

class RecentCounter {
    int counter;
    int pre;
    vector<int> arr;
public:
    RecentCounter() {
        
        counter = 0;
        pre = -1;
        
    }
    
    int ping(int t) {
        
   
        if(t >= 1 && pre == -1){
            pre = t;
        }
        arr.push_back(t);
        
        int left = t-3000;
        int right = t;
        int index = 0;
        int h = arr.size()-1;
        
        if(pre >= left){
           /* for(int i=0;i<arr.size();i++){                       // takes O(n) time 
                if(pre == arr[i]){
                    index = i;
                  //  cout<<"index in first : "<<index<<endl;
                    break;
                }
            }*/
           index =  lower_bound(arr.begin(), arr.end(), pre)      // uses binary search takes O(logn)
            - arr.begin();                                        // so lower bound returns the ele index if found and if not the index of next higher element
            
          
        }
        else{
           /* for(int i=0;i<arr.size();i++){
                if(arr[i] >= left){
                    pre = arr[i];
                    index = i;
                 //   cout<<"index in second : "<<index<<endl; 
                    break;
                }
            }
            */
            index =  lower_bound(arr.begin(), arr.end(), left)  
            - arr.begin();
          
        }
        
        return (h-index)+1;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
