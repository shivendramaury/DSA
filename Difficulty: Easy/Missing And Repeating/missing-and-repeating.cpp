class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int rep =0 ;
        long long miss = 0;
        
        for(int i=0; i<n-1; i++){
            if(arr[i] == arr[i+1]){
                rep = arr[i];
            }
        }
        long long oriSum = 1LL * n*(n+1)/2;
        
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum+= arr[i];
        }
        miss = oriSum - sum + rep;
        return {rep, miss};
    }
};