class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        int ans = (M+K-1)%N;
        return ans?ans:N;
     }
};