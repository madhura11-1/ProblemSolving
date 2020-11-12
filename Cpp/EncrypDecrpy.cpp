/*

Carer cup Persons A and B uses an encryption based system for their conversation.
Each conversation message is encoded from the source and decoded in
the destination using a shared private positive number key known to each other.
The algorithm is illustrated with an example.
Input Format with explanation:

Operation (1 for Encoding and 2 for Decoding)
Input message
Input private key
Example:

input 1 Message: Open Key: 123

Output: Oppeeen

Input: 2 Oppeeen 123

Output: Open

*/

#include <bits/stdc++.h>
using namespace std;

int j = 0;

void Decrypt(string ans,int key){

    int k = -1;
    int i = 0;
    string original = "";
    string keys = to_string(key);
    int len = ans.length();

    while(k < len){

        int s = i % keys.length();
        int num = (int)keys[s] - 48;
        i++;

        k = k + num;
        original += ans[k];
    }


    cout<<"Original "<<original<<endl;

}

void Encrypt(string msg,int key){                     // Time : O(n2)    Space : O(1)

    string ans = "";
    string keys = to_string(key);

    for(int i=0;i<msg.length();i++){

        int s = j % keys.length();
        j++;

        int number = (int)keys[s] - 48;
       // cout<<number<<endl;
        while(number != 0){
            ans += msg[i];
            number--;
        }

        

    }

    cout<<"encrypted "<<ans<<endl;
    Decrypt(ans,key);

}



int main(){

    string msg = "open";
    int key = 623;
    Encrypt(msg,key);
    return 0;
}