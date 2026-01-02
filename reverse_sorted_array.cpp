#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        void reverse(int arr[],int s, int e, int k){
            if(s>e){
                     cout << "The number is not in the array";
                     return;
            }
            int mid= s+(e-s)/2;
          
                if(arr[mid]==k){
                    cout<<"The index of number is:"<<mid;
                    return;
                }
                else if (arr[mid]>k){
                    reverse( arr, mid+1,e,k);
                }
                else if(arr[mid<k]){
                    reverse( arr, s,mid-1,k);
                }
            
            cout<<"The no. is not in the array";

        }

};

int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"Enter the sorted number in reverse order ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the no. you want to search ";
    cin>>k;
    solution S1;
    S1.reverse(arr,0,n-1,k);


}