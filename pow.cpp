#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
      vector<int> v;

      if(n<0)
      {
        n=n*-1;
        x=1/x;
      }
    
    while(n!=0){
       int an = n & 1;
        v.push_back(an);
        n=n>>1;
    }

    cout<<"this is the binary number"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int num =v.size()-1;
    int i= 0;
    while(num>i)
    {
         swap(v[i],v[num]);
             num--;
             i++;
    }

    cout<<"this is the reverse binary number"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

     vector<double> arr(v.size(),0);
     double ans = x;
    for(int i = v.size()-1 ; i>=0 ; i--)
    {
        if(i ==  v.size()-1)
        {
            arr[i]=x;
        }
        else
        {
            //  ans = x * x ;
            //  arr[i]=ans;
            //  x = ans;
            ans = ans * ans;
            arr[i] = ans;
        }
       
    }

    cout<<"this is the power of  x^n "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    double mul = 1;
    for(int i =0 ;i<v.size();i++)
    {
        if(v[i]==1)
        {
            mul =mul * arr[i];
            cout<<"multiply of number "<<mul;
        }
    }

    return mul;

    }
};


int main() {
    Solution solution;
    double x = 2.0;
    int n = 10;
    double result = solution.myPow(x, n);
    cout << "myPow(" << x << ", " << n << ") = " << result << endl;

    return 0;
}
