// Asking questions :

// 1. Find pascal triangle for n;
// 2. Find value at m,n in pascal triange    == m-1Cn-1
// 3. Print the value at some nth row.

#include<bits/stdc++.h>
using namespace std;

void findPascalTriangle(int n){

    int x = (2*n)-1;
    int l,h;
    int arr[n][(2*n)-1];
     for(int i=0;i<n;i++){
        for(int j=0;j<x;j++){
            arr[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++){
        if(i == 0){
            arr[0][(x-1)/2] =1;
        }
        else{
            int k = (2*(i+1)-1)/2;
            l = (x-1)/2 - k;
            h = (x-1)/2 + k;

            for(int j = l; j<= h ;j++){
                if( j == l || j == h){
                    arr[i][j] = 1;
                }
                else{
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j+1];
                }
            }

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<x;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void findValueAtmn(){
    cout<<"Enter value of n and m"<<endl;
    int m,n;
    cin>>n>>m;
    int num,deno;
    deno = 1;
    num = 1;
    int j = n-1;

    for(int i=m-1;i>=1;i--){
        deno = deno*i;
        num = num*j;
        j--;
    }

   cout<< num/deno;
}


void findnthRow(int n){

    // frist method : call findValueAtmn() for each column in a row. So complexity is O(n2)

    // second method : complexity is O(n)
    int ans = 1;
    int num = 1,deno = 1;
    int k =n;

    for(int i=0;i<k;i++){
        if(i == 0){
            ans = 1;
        }else{
           num = num*(n-1);
           deno = deno*(i);
           n--;
        }
        ans = num/deno;
        cout<<ans<<" ";
    }

}

int main(){

    cout<<"Select what you want to do"<<endl;
    cout<<"1.View pascal triange for n rows"<<endl;
    cout<<"2.Get value at m,n from pascal triange"<<endl;
    cout<<"3.Get entire nth row of pascal triangle"<<endl;
    
    int choice;
    cin>>choice;
    int n;

    switch(choice){

        case 1:

        cout<<"Enter the number of rows for triangle"<<endl;
        cin>>n;
        findPascalTriangle(n);
        break;
        
        case 2:
            findValueAtmn();
            break;

        case 3:
            cout<<"Enter the row number"<<endl;
            cin>>n;
            findnthRow(n);
            break;

    }
    return 0;
}