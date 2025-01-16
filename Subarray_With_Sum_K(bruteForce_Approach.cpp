//brute force approach
//Time complexity O(n)^2
//Space_complexity o(n)


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int ans = 0;
        int count = 0;
        int n=arr.size();
        for(int i =0 ; i<n;i++){
             int sum = 0;
             for(int j=i;j<n;j++){
                     sum+=arr[j];
                    if(sum==k){
                         count++;
                         ans = max(ans,count);
                         
                    }
                }

        }        
        return ans;
    }
};

int main(){
    Solution obj;
    vector <int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = obj.subarraySum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}