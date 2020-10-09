#include <bits/stdc++.h>
using namespace std;

void SearchinMatrix(int *arr,int n,int m){

    cout<<"enter the target value"<<endl;
    int tar;
    cin>>tar;

    int j = m-1;
    int i = 0;

    while(true){

        if(*(arr + i*m + j) == tar){
            cout<<"found"<<endl;
            break;
        }
        else if(*(arr + i*m + j) > tar){
            j--;
        }
        else{
            i++;
        }

    }

}

int main(){

    int m,n;
    cout<<"Enter nxm"<<endl;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    SearchinMatrix(arr[0],n,m);


    return 0;
}