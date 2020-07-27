#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
             arr[i][j] = 0;
        }
    }
    srand(time(0));
    int m = rand() % 5;
    int n = rand() % 5;
    arr[m][n] = 9;
    arr[0][0] = 1;

        for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    bool notfound = true;
    int i,j;
    i =0;
    j =0;
    while(arr[i][j] != 9){
        cout<<"Enter F B U D to move"<<endl;
        char x;
        cin >> x;
        if(x == 'F' && j <= 4){
            j++;
        }
        else if(x == 'B' && j >= 0){
            j--;
        }
        else if(x == 'U' && i <= 4){
            i--;
        }
        else if(x == 'D' && i >= 0){
            i++;
        }
        if(arr[i][j] == 9){
            break;
        }
        arr[i][j] = 1;
            for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }




    return 0;
}