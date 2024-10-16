#include <bits/stdc++.h>
using namespace std;

vector<int> combination(int n)
{
    vector <int> v;
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(i==0||i==n-1)
        {
           v.push_back(1);
        }
        else
        {
            ans=ans*(n-i+1);
            ans=ans/i;
            v.push_back(ans);
        }
       

    }
    return v;
   
}

int main(){

    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    
   vector<int> myVector= combination(n);
   
   for(int i = 0; i<myVector.size(); i++)
    {
        cout << myVector[i] << " ";
    }
   return 0;
}