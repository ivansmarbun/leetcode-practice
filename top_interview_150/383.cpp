class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag_map;
        for(int i=0;i<magazine.length();i++) {
            mag_map[magazine[i]]++; 
        }
        for(int i=0;i<ransomNote.length();i++) {
            if (mag_map.count(ransomNote[i]) && mag_map[ransomNote[i]] > 0 ) {
                mag_map[ransomNote[i]]--;
            } else {
                return false;
            }
        }
        return true;
    }
};