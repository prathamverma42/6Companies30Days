class Solution
{ 
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        //code here
        string str;
        unordered_map<string, vector<string>> m;
        vector<vector<string>> v;
        for (int i = 0; i < string_list.size(); i++)
        {
            str = string_list[i];
            sort(string_list[i].begin(), string_list[i].end());
            m[string_list[i]].push_back(str);
        }
        for (auto x : m)
        {
            v.push_back(x.second);
        }
        return v;
    }
};
