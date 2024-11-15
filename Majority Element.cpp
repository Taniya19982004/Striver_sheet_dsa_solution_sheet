#include <bits/stdc++.h>
using namespace std;
    int majorityElement(vector<int>& arr) {
        int n = arr.size()/2;
        int count = 0;
        int ans = arr[0];
        for(int i=0;i<arr.size();i++)
        {
            count = 0;
           for(int j = 0 ;j<arr.size();j++)
           {
              if(arr[i]==arr[j])
              {
                count++;
              }
           }

           if(count>n)
              {
               ans = arr[i];
               break;
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