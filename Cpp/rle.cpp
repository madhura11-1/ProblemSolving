/* Run lenght encoding 
   Compression algorithm  
    Eg : wwwwhhhh : w4h4
*/

#include <bits/stdc++.h>
using namespace std;

void findRLE(string s){

    string dest = "";
    dest += s[0];
    char k = s[0];
    int count =0;

    for(int i=0;i<s.length();i++){

        if(k == s[i]){
            count++;
        }
        else{
            k = s[i];
            dest += to_string(count);
            dest += k;
            count = 1;
        }
    }

    dest += to_string(count);
    cout<<dest<<endl;
}

int main(){
    string s = "wmm";
    findRLE(s);
}