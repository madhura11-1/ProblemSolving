/*
 Given an array you can jump i+2 or i-1
 cost = a[i] value
 find the minimum cost to jump outside the array

*/



#include <bits/stdc++.h>
using namespace std;
vector<int> cost,cache;
                                                   //  Complexity = O(n);

void calculate(int i){
    int &ans = cache[i];
    ans = min(cache[i-2] + cost[i-2], cache[i-1]+cost[i-1]+cost[i+1]);
}

int main(){

    cout<<"Enter the elements in array and enter -1 to exit"<<endl;
    int ele;
    cin>>ele;
    while(ele != -1){
        cost.push_back(ele);
        cache.push_back(-1);
        cin>>ele;
    }

    cache.push_back(-1);
    cache.push_back(-1);

    cache[0] = 0;
    cache[2] = cache[1];
    cache[1] = cache[0] + cache[2];

    for(int i = 2;i<cost.size()+2;i++){
        calculate(i);
    }




    return 0;
}