class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> myset;
        for(auto a : sentence){
           myset.insert(a);
        }
        return (myset.size() == 26);
        
    }
};