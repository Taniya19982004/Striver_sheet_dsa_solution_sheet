#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>v;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
        
    }
};

int main() {
    
    int target, n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> matrix(n);
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> matrix[i];
    }

    cout << "Enter the target element to search for: ";
    cin >> target;

    Solution s;
    
     vector <int> v = s.twoSum(matrix, target);

       cout<<v[0]<<"   "<<v[1];

    return 0;
}