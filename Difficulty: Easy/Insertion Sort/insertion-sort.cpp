class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n=arr.size();
        int curr=0;
        for(int i=1; i<n; i++){
            curr=arr[i];
            int prev=i-1;
            while(prev>=0 && arr[prev]>curr){
                arr[prev+1] = arr[prev];
                prev--;
            }
            arr[prev+1] = curr;
        }
    }
};