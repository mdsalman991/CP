class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        // implementation
        unordered_map<string,int> mp;
        vector<int> ans;
        // two imp variables
       for(auto x: words) mp[x]++;
        
        int i,j, m = s.size(), wordlen = words[0].length(), wordcount = words.size();
        
        for(i=0;i<=m-(wordcount*wordlen);i++){
            unordered_map<string,int> seen;
            for(j=0;j<wordcount;j++){
                string res = s.substr(i+j*wordlen,wordlen);
                if(mp.find(res) != mp.end())
                    {
                        seen[res]++;
                        if(seen[res] > mp[res]) break;
                    }
                else break;
            }
            if(j==wordcount) ans.push_back(i);
        }
        return ans;
    }
};
