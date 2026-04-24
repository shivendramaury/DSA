class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int n=arr.size();
        int leftMax=1;
        int count=0;
        
        for(int i=0;i<n;i++){
            
            if(arr[i]>=leftMax){
                count++;
                leftMax=arr[i];
            }
        }
        return count;
    }
};