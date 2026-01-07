#include <bits/stdc++.h>
using namespace std;
 vector<int> majorityElement(vector<int>& arr) {
        int n =arr.size();
        vector<int>v;
        int count1 = 0;
        int count2 = 0;
        int ele1;
        int ele2;
        for(int i=0;i<arr.size();i++)
        {
           if(count1 == 0 && arr[i]!=ele2)
           {
              count1 = 1;    
              ele1 = arr[i];
           }
           else if(count2 == 0 && arr[i]!=ele1)
           {
              count2 = 1;    
              ele2 = arr[i];
           }
           else if(arr[i]==ele1){
            count1++;
           }
           else if(arr[i]==ele2){
            count2++;
           }
           else {
            count1--,count2--;
           }
        }

           count1 = 0;
           count2 = 0;
        for(int i=0;i<n;i++){
             if(arr[i]==ele1) count1++;
             if(arr[i]==ele2) count2++;

        }
        if(count1>n/3){
            v.push_back(ele1);
        }
        if(count2>n/3){
        v.push_back(ele2);
        }

        if(ele1==ele2){
          v.erase(v.begin()+1);
        }
            return v;
        
           
    }

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}
