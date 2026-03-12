class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n=arr.size();
        int start=0, end=n-1;
        int first=-1, last=-1;

        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]==target){
                first=mid;
                end= mid-1;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        // last
        start=0, end=n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid] == target){
                last = mid;
                start=mid+1;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start= mid+1;
            }
        }
        return {first, last};
    }
};