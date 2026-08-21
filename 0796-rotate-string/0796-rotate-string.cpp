class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp=goal+goal;
        if(temp.find(s)!=string::npos)return true;
        return false;
    }
};