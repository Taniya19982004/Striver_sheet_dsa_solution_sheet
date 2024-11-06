#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        
         int n = arr.size();
         int m = arr[0].size();  
         int start = 0;
         int end = m*n-1;
       
        while(start<=end){
        int mid = start + (end-start)/2;
        int row = mid/m;
        int column = mid%m;

            if(arr[row][column]==target){
                return true;
            }
            else if(arr[row][column]<target)
            {
                start = mid+1;
            }
            else if(arr[row][column]>target)
            {
                end = mid-1;
            }
        }
        return false;

          
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {0, 1, 2, 3},
        {4, 5, 7, 8},
        {9, 10, 11, 15}
    };

    bool ans = solution.searchMatrix(matrix,16);

    if(ans){
        cout<<"target is found";
    }
    else{
        cout<<"target is not found";
    }
    
    return 0;
}
