class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string x : strs){
            string tmp = "(" + to_string(x.size()) + ")" + x;
            res += tmp;
        }
        return res;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> res;
        while(i < s.size()){
            if(s[i] == '('){
                i++;
                string a = "";
                while(s[i] != ')'){
                    a += s[i];
                    i++;
                }
                i++;
                int x = stoi(a);
                string tmp = "";
                for(int j = 0; j < x; j++){
                    tmp += s[i];
                    i++; 
                }
                res.push_back(tmp);
            }
        }
        return res;
    }
};
