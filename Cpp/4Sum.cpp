#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
/*    
This method does not consider all the possible quads it does give out some of them but not all


        vector<int> a;
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++){
            
            
            a.push_back(nums[i]);
            
            for(int j=i+1;j<nums.size();j++){
                
                if(a.size() == 3){
                    
                    
                    for(int k= j;k<nums.size();k++){
                        
                        
                        
                            a.push_back(nums[k]);
                        
                        int sum =0;
                        if(a.size() == 4){
                            
                            for(int h=0;h<4;h++){
                                sum += a[h];
                                cout<<a[h]<<" ";
                            }
                            cout<<endl;
                            if(sum == target){
                               ans.push_back(a); 
                            }
                            a.pop_back();
                            //return ans;
                        }
                        
                    }
                    a.pop_back();
                    
                }
                
                    a.push_back(nums[j]);
            
                
            }
            
            a.clear();
            
        }
        
        return ans;

 */


    }


int main(){
    cout<<"Enter array ele"<<endl;
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
    int p;
    cin>>p;
    arr.push_back(p);
    }
    fourSum(arr,0);
    return 0;
}