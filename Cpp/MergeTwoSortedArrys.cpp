/*  First Approach : Take two pointers and start comparing and place the smaller among the two numbers in new array
                    Time : O(n) + O(m)    
                    Space : O(n + m)

    Second Approach : Two pointers  find the smallest
                      If the second is smaller swap with first one
                      and again sort the second array 
                      Time : O(n*m)               -- if all ele in first array are greater then n times swap and then reorder m ele in second array 
                      Space : O(1)

    Third Appraoch : GAP algorithm
                    find gap which is n/2 
                    first pointer at 0th ele and second pointer at gap th element
                    compare the two and if gapth ele is smaller than first swap
                    continue until gap = 1
                    Time : O(nlogn)
                    Space : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

void sortF(vector<int> &arr2){

     for(int i = 0;i < arr2.size()-1;i++){
         if(arr2[i] > arr2[i+1]){
             swap(arr2[i],arr2[i+1]);
         }
     }

}

void mergeTwoArrays(vector<int> &arr1,vector<int> &arr2,int n1,int n2){

    int i=0;
    int j=0;
    while(i < arr1.size()){
          if(arr1[i] > arr2[j]){
              swap(arr1[i],arr2[j]);
              sortF(arr2);
          }
          i++;
          
    }
      

}

int main(){

    cout<<"Enter the number of array elements in 1"<<endl;
    int n1,k,l;
    cin>>n1;
    vector<int> arr1;
    cout<<"Enter array elements in sorted form"<<endl;
    for(int i=0;i<n1;i++){
        cin>>k;
        arr1.push_back(k);
    }
    cout<<"Enter the number of array elements in 2"<<endl;
    int n2;
    cin>>n2;
    vector<int> arr2;
    cout<<"Enter array elements in sorted form"<<endl;
    for(int i=0;i<n2;i++){
        cin>>l;
        arr2.push_back(l);
    }

    mergeTwoArrays(arr1,arr2,n1,n2);

    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}

