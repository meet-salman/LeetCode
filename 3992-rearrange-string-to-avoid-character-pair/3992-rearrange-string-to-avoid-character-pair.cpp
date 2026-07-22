class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string t = "";

        for(char c : s){
            if(c == y)
                t+= c;
        }

        for(char c : s){
            if(c != y)
                t+= c;
        }

        return t;
    }
};