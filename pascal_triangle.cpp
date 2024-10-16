#include <bits/stdc++.h>
using namespace std;

int combination(int n,int r)
{
    if(n==r)
    {
        return 1;
    }
   else{ int ans=1;
    for(int i=0;i<r;i++)
    {
       
       ans=ans*(n-i);
        ans=ans/(i+1);

    }
    return ans;
   }
}

int main()
{
    int n,r;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"Enter the value of r \n";
    cin>>r;
   int ans= combination(n,r);
   cout<<ans;

}
