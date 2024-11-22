#include <bits/stdc++.h>
using namespace std;
     int majorityElement(vector<int>& arr) {
        map<int,int>mp;
        int n = arr.size()/2;
        int ans = arr[0];
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
           
        for(auto it :mp){
            if (it.second > (n)) {
            ans =  it.first;
             }
        }
        return ans;
     }

    int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
