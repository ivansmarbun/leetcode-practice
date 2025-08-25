class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i = 0;
        int j = 0;
        int match = 0;
        while(i<ransomNote.length() && j<magazine.length()) {
            if (ransomNote[i] != magazine[j]) {
                j++;
            } else if (ransomNote[i] == magazine[j]) {
                match++;
                i++;
                magazine[j] = '_';
                j=0;
            }
        }
        if (match == ransomNote.length()) {
            return true;
        } else {
            return false;
        }
    }
};