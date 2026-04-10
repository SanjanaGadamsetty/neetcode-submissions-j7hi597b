class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        for (char c:s){
            if ((c=='(')||(c=='[')||(c=='{')) v.push_back(c);
            else {
                if (v.empty()) return false;
                if (c==')' && v.back()!='(') return false;
                if (c==']' && v.back()!='[') return false;
                if (c=='}' && v.back()!='{') return false;
                v.pop_back();
            }
        }
        return v.empty();
    }
};
