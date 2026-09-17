class Solution {
  public:
    vector<int> countGreater(vector<int> &arr, vector<int> &indices) {
        int n1=arr.size();
        int n2=indices.size();
        int count=0;
        
        vector<int> ans(n2, 0);
            for(int j=0; j<n2; j++){
                int idx = indices[j];
                for(int k=idx+1;k<n1;k++){
                    if(arr[idx] < arr[k]){
                        ans[j]++;
                    }
                }
                
            }
        return ans;
    }
};