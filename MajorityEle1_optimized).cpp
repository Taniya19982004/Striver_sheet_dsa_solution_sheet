#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& arr) {
        int count = 0;
        int ele;
        int n = arr.size()/2;
        int ans = arr[0];
        for(int i=0;i<arr.size();i++)
        {
           if(count == 0)
           {
              count = 1;
              ele = arr[i];
           }
           else if(arr[i]==ele){
            count++;
           }
           else {
            count--;
           }
        }
           return ele;

        
           
    }

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
     int ans = majorityElement(arr);
    cout << "The majority elements is: "<<ans;
    
    return 0;
}
