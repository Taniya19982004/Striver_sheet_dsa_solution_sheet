#include<bits/stdc++.h>
using namespace std;
class Solution {
    int B_S_L(vector<int>& arr, int s, int e, int k){
        if(s>e){
            return -1;
        }
        
        int mid = s+(e-s)/2;
        
         if(arr[mid]==k){
             if(mid==0 || arr[mid-1]!=k){
                 return mid;
             }
             else {
                 return  B_S_L( arr, 0, mid-1, k);
             }
         }
         else if(arr[mid]>k){
             return B_S_L( arr, 0, mid-1, k);
         }
         else{
             return B_S_L( arr, mid+1, e , k);
         }
    }
    int B_S_R(vector<int>& arr, int s, int e, int k){
        if(s>e){
            return -1;
        }
        int mid = s+(e-s)/2;
        
         if(arr[mid]==k){
             if(mid==e || arr[mid+1]!=k){
                 return mid;
             }
             else {
                  return B_S_R( arr, mid+1, e , k);
             }
         }
         else if(arr[mid]>k){
             return B_S_R( arr, 0, mid-1, k);
         }
         else{
             return B_S_R( arr, mid+1, e , k);
         }
    }
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n= arr.size();
       vector<int>v;
       int l = B_S_L( arr, 0, n-1, x);
       int r = B_S_R( arr, 0, n-1, x);
       
       v.push_back(l);
       v.push_back(r);
       
       return v;
       
    }
};

int main(){
    
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the no. you want to find";
    cin>>x;
     Solution obj;
     vector<int> v= obj.find(arr, x);
     cout << "First Index: " << v[0] << endl;
     cout << "Last Index: " << v[1] << endl;
}