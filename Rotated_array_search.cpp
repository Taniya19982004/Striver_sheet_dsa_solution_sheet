#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int min_Element = arr[0];
        int min_Index = 0;

        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < min_Element){
                min_Element = arr[i];
                min_Index = i;
            }
        }

        // If target is minimum element
        if(min_Element == target){
            return min_Index;
        }

        int s, e;

        // ✅ Correct condition
        if(target >= arr[min_Index] && target <= arr[arr.size()-1]){
            s = min_Index;
            e = arr.size() - 1;
        } else {
            s = 0;
            e = min_Index - 1;
        }

        // Binary Search
        while(s <= e){
            int mid = s + (e - s) / 2;

            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }

        return -1;
    }
};
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);   // ✅ FIXED
    cout << "Enter the rotated array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];    // ✅ FIXED
    }

    int k;
    cout << "Enter the number you want to search: ";
    cin >> k;

    Solution S1;
    int result = S1.search(arr, k);  // ✅ STORE RESULT

    cout << "Index: " << result;     // ✅ PRINT RESULT
}
