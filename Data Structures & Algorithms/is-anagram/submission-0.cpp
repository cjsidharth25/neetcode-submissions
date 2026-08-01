class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ms,mt;
        if(s.size() != t.size()){
            return false;
        }
        else{
            for(char c : s){
                ms[c]++;
            }
            for(char c : t){
                mt[c]++;
            }
            if(ms == mt){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
