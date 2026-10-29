class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_characters;
        unordered_map<char, int> t_characters;

        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            if (s_characters.find(s[i]) == s_characters.end()) {
                s_characters.insert({s[i], 1});
            } else {
                s_characters[s[i]]++;
            }
            if (t_characters.find(t[i]) == t_characters.end()) {
                t_characters.insert({t[i], 1});
            } else {
                t_characters[t[i]]++;
            }
        }

        return t_characters == s_characters;
    }
};
