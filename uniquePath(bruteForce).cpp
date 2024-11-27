 # include <bits/stdc++.h> 
 using namespace std;
 int countPath(int i,int j ,int m , int n){
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>=n) return 0;
        else return countPath(i+1,j,m,n) + countPath(i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {

       return countPath(0,0,m,n);
    }
int main()
{
   
    int totalCount= uniquePaths(3,7);
    cout<<"The total number of Unique Paths are "<<totalCount<<endl;
}