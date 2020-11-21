/*

Given a 1-d array candy crush, return the shortest array after removing all the continuous same numbers (the repeating number >= 3)
input: 1-d array [1, 3, 3, 3, 2, 2, 2, 3, 1]
return: [1, 3,1]
Time complexity should be better than O(n²)

*/

#include <bits/stdc++.h>
using namespace std;

void candyCrush(vector<int> arr){

    deque<int> s;
    int count = 1;
    int latest = arr[0];
    s.push_back(arr[0]);

    for(int i=1;i<arr.size();i++){

      //  cout<<s.back()<<endl;

        if(s.back() != arr[i] && count < 3){

            while(count > 1){
                s.push_back(s.back());
                count--;
            }
            count=1;
            s.push_back(arr[i]);
            latest = arr[i];
        }
        else if(s.back() != arr[i] && count >= 3){
            s.pop_back();
            count=1;
            s.push_back(arr[i]);
            latest = arr[i];
        }
        else if(s.back() == arr[i]){
           // s.push(arr[i]);
            count++;
        }

    }

    //cout<<"latest"<<latest<<" "<<s.back()<<endl;
    //cout<<"count "<<count<<endl;
    if(count >= 3 && s.back() == latest){
        s.pop_back();
    }
    else{
    while(count != 1 && count < 3){
        s.push_back(latest);
        count--;
    }
    }

    while(!s.empty()){    
        cout<<s.front()<<" ";
        s.pop_front();
    }

}

int main(){

    cout<<"Enter the number of array ele"<<endl;
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
    candyCrush(arr);
    return 0;
}