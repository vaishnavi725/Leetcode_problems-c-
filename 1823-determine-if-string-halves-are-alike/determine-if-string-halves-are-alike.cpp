class Solution {
public:
    bool halvesAreAlike(string s) {
         int n = s.length();
        int count = 0;

        for (int i = 0; i < n / 2; i++) {
            if (isVowel(s[i])) count++;
            if (isVowel(s[i + n / 2])) count--;
        }

        return count == 0;
    }

private:
    bool isVowel(char c) {
        return string("aeiouAEIOU").find(c) != string::npos;
    }
};