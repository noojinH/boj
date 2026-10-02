class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> freq(26);
        for(char c : s){
            ++freq[c - 'a'];
        }
        for(char c : t){
            --freq[c - 'a'];
        }
        return all_of(freq.begin(), freq.end(), \
        [](int x) {return x==0;});
    }
};