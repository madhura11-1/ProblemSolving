#include <bits/stdc++.h>
using namespace std;


int truckTour(vector<vector<int>> petrolpumps) {
  
  int n = petrolpumps.size();
  int i =0;
  int j;
  long instant;
  long k =0;
  map<int,bool> mapi;
  bool x = true;
  while(x){
      i = i%n;
      instant = petrolpumps[i][0] + k;
      if(instant >= petrolpumps[i][1]){
          k = instant - petrolpumps[i][1];                // This solution takes way more time to find and also fails in some tests
          mapi[i] = true;                                 // as u r using circular queue it does not guarantee to have o(n) time
      }                                                    //also o(n) extra space
      else{
          mapi.clear();
      }
      i++;
      j = i%n;
      if(mapi.find(j) != mapi.end() && mapi[j] == true){
          x = false;
      }
  }
   return j;
}

int main(){
   
   vector<vector<int>> abc = {{5,4},{3,6},{10,2}};
   cout<<truckTour(abc);
   return 0;
}