class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int lar = arr[0];
        int secLar = -1;
        int n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i] > lar && lar != secLar){
                secLar = lar;
                lar = arr[i];
            }
            else if(arr[i]<lar && arr[i]>secLar){
                secLar = arr[i];
            }
        }
        return secLar;
    }
};