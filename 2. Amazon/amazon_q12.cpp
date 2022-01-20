class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans = "";
        while(n!=0){
            n--;
            int r=n%26;
            char c='A'+r;
            ans=c+ans;
            n=n/26;
        }
        return ans;
    }
};
