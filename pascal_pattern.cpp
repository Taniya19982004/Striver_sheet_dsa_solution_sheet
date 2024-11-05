#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   
   int ncr(int n, int r)
   {
       int ans = 1;
       for(int i = 1 ; i<=r ; i++)
       {
           ans *= n-i+1;
           ans/=i; 
       }
       return ans;
   }

    vector<vector<int>> generate(int numRows) {
        int ans = 0 ;
       vector<vector<int>>pascal(numRows);
        for(int i=0;i<numRows;i++){
           vector<int> row;  
            for(int j=0;j<=i;j++)
            {
               ans = ncr(i,j);
               row.push_back(ans);
            }
            pascal[i]=row;
        }
        return pascal;
    }
};

 void space(int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<" ";
        }
    }
    

int main(){
    int n;
    cout<<"Enter the no. of rows of pascal ";
    cin>>n;

   
    Solution s;
     vector<vector<int>>v=s.generate(n);

        for(int i=0;i<v.size();i++){

            for(int j=0;j<=i;j++)
            {
                if(j==0){
                     space(v.size()-i);
                }
                else {
                    cout<<" ";
                }
               
                cout<<v[i][j];
            }
            cout<<endl;
        }
    return 0;
}