#include <bits/stdc++.h>
using namespace std;

void cal(int n,int ele){
    vector<bool> check(n+1,false);
    vector<int> arr(n+1,-1);

    for(int i=n;i>=1;i--){
        arr[i] = (ele%10);
        ele = ele/10;
    }

    if(n == 1){
        if(arr[1]%2 == 0){
            cout<<"2"<<endl;

        }else{
            cout<<"1"<<endl;
        }
    }else{

  /*  for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";//check
    }
*/
    for(int i=0;i<n-1;i++){
        if(i % 2 == 0){
            int store=-1;
            int flag = -2;
            for(int j=1;j<=n;j+=2){
                if(arr[j] % 2 == 0 && check[j] == false){
                    check[j] = true;
                    flag = 0;
                    break;
                }
                else{
                    store = j;
                }
            }
            if(store != -1 && check[store] == false && flag == -2){
                check[store] = true;
            }
        }else{

            int store=-1;
            int flag = -2;
            for(int j=2;j<=n;j+=2){
                if(arr[j] % 2 != 0 && check[j] == false){
                    check[j] = true;
                    flag = 0;
                    break;
                }
                else{
                    store = j;
                }
            }
            if(store != -1 && check[store] == false && flag == -2){
                check[store] = true;
            }
        }
    }

    /*for(int i=0;i<n+1;i++){
        cout<<check[i]<<" ";
    }*/

    for(int i=1;i<=n;i++){
        if(check[i] == false && i%2 == 0){
            cout<<"2"<<endl;
            break;
        }
        else if(check[i] == false && i%2 != 0){
            cout<<"1"<<endl;
            break;
        }
    }
    }
}


int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        int ele;
        cin>>n;
        cin>>ele;
        cal(n,ele);
    }
    return 0;
}