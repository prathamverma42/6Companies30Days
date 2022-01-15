class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long int ans = 0;
        for(long long int i=1;i<=N;i++){
            ans += i*i;
        }
        return ans;
    }
};