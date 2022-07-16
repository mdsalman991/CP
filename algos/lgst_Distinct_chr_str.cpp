int longestSubstrDistinctChars (string S)
{
    // your code here
    int n = S.length();
    int i=0, j=0;
    unordered_map<char,int> mp;
    int ma = 0;
    while(j<n){
       mp[S[j]]++;
       if(mp.size() == j-i+1){
           ma = max(ma,j-i+1);
           j++;
       }
       else{
           while(j-i+1 > mp.size()){
               mp[S[i]]--;
               if(mp[S[i]]==0) mp.erase(S[i]);
               i++;
           }
           j++;
       }
        
    }
    return ma;
}

// Longest Distinct characters in string  