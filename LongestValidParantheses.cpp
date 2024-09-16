class Solution {
public:
    int longestValidParentheses(string s) {
       int maxi = 0, op = 0, cl = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '('){
                op ++; 
            }
            else {
                cl ++;
            }
            if (op == cl){
                maxi = max(maxi, cl*2);
            }
            else if (cl > op){
                cl = 0;
                op = 0;
            }
        }
        op = 0; 
        cl = 0;
        for (int i = s.length()-1; i >-1; i--){
            if (s[i] == '('){
                op ++;
            }
            else {
                cl++;
            }
            if (op == cl){
                maxi = max(maxi, cl*2);
            }
            else if (op > cl){
                cl = 0; 
                op = 0;
            }
        }
        return maxi;
    } 
};