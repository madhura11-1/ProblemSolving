#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

void prime(int n)
{
    int j,flag=0;
    for(int i=1;i<n;i++)
    {
       
       for(j=2;j<=i;j++)
       {
           flag=0;
           if(i%j==0 && i!=j)
           {
               flag=1;
               break;
           }
           
       }
       if(flag==0 && i!=1)
       arr.push_back(i);
    }
}
int main()
{
    prime(30000);
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<", ";

    cout<<arr.size();
    return 0;
}

