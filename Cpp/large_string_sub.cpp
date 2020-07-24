#include<bits/stdc++.h>
using namespace std;


bool checksmall(string a,string b){
    if(a.length()>b.length()){
        return false;
    }
    else if(a.length()<b.length()){
        return true;
    }
    else
    {
        for(int i=0;i<a.length();i++){
                if(int(a[i])>int(b[i]))
                return false;
                else if(int(a[i])<int(b[i]))
                return true;
        }  
         }
    return false;
}

int main(){
       
    string a = "123";        
    string b = "1";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    int carry =0;
    string result = "";
    if(checksmall(a,b)){

        string temp = a;
        a = b;
        b = temp;
        cout<<"its small";
    }

    for(int i=0;i<b.length();i++){
        if(int(a[i])>=int(b[i]) && carry == 0){
           result += to_string(int(a[i])-int(b[i])); 
           //cout<<int(a[i])-int(b[i]); 
            
        }
        else if(int(a[i]) > int(b[i]) && carry == 1){
           result += to_string(int(a[i]) - int(b[i]) - 1);
            carry = 0;
            //cout<<int(a[i]) - int(b[i]) - 1;
        }
        else if(int(a[i]) < int(b[i]) && carry == 0){
          result += to_string(int(a[i]) + 10 - int(b[i]));
            carry = 1;
           // cout<<int(a[i]) + 10 - int(b[i]);
        }
        else if(int(a[i]) < int(b[i]) && carry == 1){
        result += to_string(int(a[i]) + 9 - int(b[i]));
            carry = 1;
           // cout<<int(a[i]) + 9 - int(b[i]);
        }
    }

    for(int j = b.length();j<a.length();j++){
        if(carry == 1){
            result += to_string(int(a[j])-1);
            carry = 0;
            //cout<<int(a[j])-1;
        }
        result += a[j];
       // cout<<int(a[j]);
       //cout<<(a[j]);
       //cout<<endl;
    }
    reverse(result.begin(),result.end());
    cout<<result;


    return 0;
}