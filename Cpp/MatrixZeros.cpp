#include<bits/stdc++.h>
using namespace std;

// Approach 1:  Find the ele as value zero
//              place -1 to its row and column elements except those which hare already zero
//              then again iterate over array and make all -1 as 0
// Complexity :  Time : O(nxm) + O(n) + O(m) + O(nxm)
//               Space : in place

void setMatrixToZero(int n,int m,int *arr){

    bool row = false;
    bool col = false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(*(arr + i*m + j) == 0 && i == 0){
                row = true;
                *(arr + 0*m + j) = 0;
            } 
            if(*(arr + i*m + j) == 0 && j == 0){
                col = true;
                *(arr + i*m + 0) = 0;
            }
            if(*(arr + i*m + j) == 0 && i!=0 && j!= 0){
                *(arr + i*m + 0) = 0;
                *(arr + 0*m + j) = 0;
            }
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<*(arr + i*m + j)<<" ";
        }
        cout<<endl;
    }
    cout<<row<<" "<<col<<endl;

    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if((*(arr + i*m + 0)  == 0 || *(arr + 0*m + j) == 0) && (i!=0 || j!= 0)){
                *(arr + i*m + j) = 0;
            }
            else if(i ==0 && row){
                *(arr + i*m +j) =0;
            }
            if( j ==0 && col){
                *(arr + i*m +j) =0;
            }
        }
    }

        cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<*(arr + i*m + j)<<" ";
        }
        cout<<endl;
    }




}   

int main(){
    cout<<"Enter the rows and colums of matrix"<<endl;
    int m,n;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    setMatrixToZero(n,m,arr[0]);
    return 0;
}