#include <bits/stdc++.h>
using namespace std;

//vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
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

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
        int left,right;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        if(nums.empty()){
            return ans;
        }
        
        for(int i=0;i<nums.size();i++){
            
            
            for(int j = i+1;j<nums.size();j++){
                
                left = j+1;
                right = nums.size()-1;
                while(left < right){
                int k = target - (nums[i] + nums[j]);
                if(k == (nums[left] + nums[right])){
                    vector<int> a;
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[left]);
                    a.push_back(nums[right]);
                    
                    ans.push_back(a);
                     
                    
                    while(left < right && nums[left] == a[2]) left++;
                    
                    while(left < right && nums[right] == a[3]) right--;
                }
                else if(k > (nums[left] + nums[right])){
                    left++;
                }
                else{
                    right--;
                }
                
                }
                
                while(j+1 < nums.size() && nums[j +1] == nums[j]) j++;
                
            }
            
            while(i+1 < nums.size() && nums[i+1] == nums[i]) i++;
            
        }
        
        return ans;
        
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