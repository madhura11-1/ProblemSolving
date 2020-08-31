#include<bits/stdc++.h>
using namespace std;

//first ask if the pairs or intervals are in ascending order if not then apply merge sort to sort them

vector<vector<int>> MergeInterval(vector<vector<int>> arr){

        vector<int> a;
        vector<vector<int>> result;
        a.push_back(arr[0][0]);
        a.push_back(arr[0][1]);
        for(int i=0;i<arr.size();i++){
            if(a[1] >= arr[i][0] && a[1] <= arr[i][1])
            {
                a[1] = arr[i][1];
            }
            else if(a[1] >= arr[i][0] && a[1] >= arr[i][1]){
                a[1] = a[1];
            }
            else{
                result.push_back(a);
                a[0] = arr[i][0];
                a[1] = arr[i][1];
                
            }
            
        }
        result.push_back(a);

        return result;
}

int main(){
    cout<<"Enter number of intervals"<<endl;
    int n;
    cin>>n;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
    vector<int> a;
    int first,second;
    cout<<"Enter the interval"<<endl;
    cin>>first>>second;
        a.push_back(first);
        a.push_back(second);
        arr.push_back(a);
    }
    vector<vector<int>> result = MergeInterval(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i][0]<<" "<<result[i][1]<<endl;
    }
    return 0;
}