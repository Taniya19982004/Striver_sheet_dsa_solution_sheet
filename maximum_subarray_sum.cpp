#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        void maximum_sum(int arr[],int n){
            int maxi=INT_MIN;
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=i;j<n;j++){
                    sum+=arr[j];
                    maxi=max(sum,maxi);
                }
            }

            cout<<maxi;
        }

};

int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"Enter the number  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solution S1;
    S1.maximum_sum(arr,n);


}