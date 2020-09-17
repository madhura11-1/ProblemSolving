#include <bits/stdc++.h>
using namespace std;

int n = 4;
int MASK = (1<<n)-1;

int TSP(int arr[][4],int mask,int curr){


    if(mask == MASK){
        return arr[curr][0];
    }

    int max = INT_MAX;

    for(int city = 0;city<n;city++){

        if((mask &(1<<city)) == 0){
            int ans = arr[curr][city] + TSP(arr,(mask | (1<<city)),city);
            max = min(ans,max);
        }
    }
    return max;
}

int main(){

    int arr[4][4] = {0,2,3,5,
                     2,0,1,1,
                     3,1,0,2,
                     5,1,2,0};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<TSP(arr,1,0);

    return 0;
}