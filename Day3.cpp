class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(isalnum(c)){
                temp+= tolower(c);
            }
        }

        int i=0;
        int j=temp.size()-1;

        while(i<j){
            if (temp[i]!=temp[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
