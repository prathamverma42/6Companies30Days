class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> ans;
        deque<int> dq;
        for(int i=0;i<n;i++){
            while(!dq.empty() && arr[i]>=arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                if(dq.front()==i-k){
                    dq.pop_front();
                }
                ans.push_back(arr[dq.front()]);
            }
        }
        return ans;
    }
};