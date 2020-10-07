// Problem is to rotate the matrix by 90

// Approach 1 : use another matrix and make all rows as colums and vice versa cosidering 90 degere
// Complexity : time : O(n2) space : O(n2);

// Approach 2 : use transpose and then reverse each row;
// Complexity : time : O(n2) space : O(1); (give below_)


#include <bits/stdc++.h>
using namespace std;

void Rotateby90(int *arr,int n){
          
        // Transform

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(*(arr + i*n + j),*(arr + j*n + i));
            }
        }
        cout<<endl;

          for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<*(arr + i*n + j)<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        for(int i=0;i<n;i++){
            reverse((arr+i+0),(arr+i+n-1));                       //may give problem so use vector instead
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<*(arr + i*n + j)<<" ";
            }
            cout<<endl;
        }

}

int main(){

    int n;
    cout<<"Enter the matrix size"<<endl;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    Rotateby90(arr[0],n);
    return 0;
}