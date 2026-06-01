class Solution {
public:
    bool isAnagram(string s, string t) {
        std::multiset<char> myS(s.begin(), s.end());
        std::multiset<char> myT(t.begin(), t.end());
        return myS == myT && s.size() == t.size();
    }
};
