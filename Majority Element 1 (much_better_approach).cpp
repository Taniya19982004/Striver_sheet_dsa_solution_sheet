#include <bits/stdc++.h>
using namespace std;
     int majorityElement(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size()/2;
        int count = 1;
        int ans = arr[0];
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
                if(count>n){
                     ans=arr[i];
                     break;
                }
            }
            else{
                count = 1;
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
