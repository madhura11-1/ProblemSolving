/* Problem Statement 

Sort the given array of sTring in alphabetical order considering 'c' as its starting alphabet
 or second case : the order can be gievn by them say 'cdfguwkenvokrg'

Approach 1 : Do bubble sort , insertion sort , any sort considering the compare() function of string [case 1] 
             Then just put elements that are placed prior to 'c' at last indivisually

The compare() function in string has O(n) complexity

Time Complexity : O(n3)
Space : O(1) extra

Approach 2 : use sort() function to sort and then put elements prior to 'c' last later [case 1]
             Time Complexity : O(nlogn) + O(n);

Approach 3 : unsorted map to map char with precedence  [case 2]
             sort(begin,end,com) 
             in com fuction write ur code

             next question : Can u do it without extra space ? 

             So use quick sort then a for loop to iterate over two strings and inside that do binary search to search for char in given order
             time : O(n2logn*logn)
*/             


#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> mapi;
string order = "hlabcdefgijkmnopqrstuvwxyz";

bool comp(string &a,string &b){

    for(int i=0;i<min(a.length(),b.length());i++){

        if(mapi[a[i]] != mapi[b[i]]){
            return mapi[a[i]] < mapi[b[i]];
        }

    }

    // if a is substring of b then returning a only   eg : a = cook , b = cookook
    return a.size() < b.size();

}

void sortStringArray(vector<string> arr){                      // Time : O(n2logn)
                                                               // space : O(n)

    string a = "hellz";
    string b = "hellZ";

    cout<<a.compare(b);

    sort(arr.begin(),arr.end(),comp);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    cout<<"enter the array fo strings"<<endl;
    vector<string> a;

    for(int i=0;i<order.length();i++){
        mapi[order[i]] = i;
    }
    
    bool x = true;
    while(x){

        string p;
        cin>>p;
        a.push_back(p);
        cout<<"cotibue"<<endl;
        char t;
        cin>>t;
        if(t != 'y'){

            x = false;
        }

    }

    sortStringArray(a);
    return 0;

}