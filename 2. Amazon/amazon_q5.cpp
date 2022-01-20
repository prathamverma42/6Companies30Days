class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> ans;
        for(int i=0;i<s.length();i++){
            string temp = s.substr(0,i+1);
            vector<string> v;
            set<string> st;
            for(int j=0;j<n;j++){
                string temp2=contact[j].substr(0,i+1);
                if(temp==temp2) st.insert(contact[j]); 
            }
            for(auto x:st) v.push_back(x);
            if(v.size()==0) v.push_back("0");
            ans.push_back(v);
        }
        return ans;
    }
};