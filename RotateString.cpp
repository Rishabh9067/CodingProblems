/*
Rotate String
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false
 

Constraints:

1 <= s.length, goal.length <= 100
s and goal consist of lowercase English letters.

*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if(s.size() != goal.size()){
            return false;
        }
        goal = goal+goal;
        
        int cnt =0;
        bool flag = false;
        
        for(int i=0;i<goal.size();i++){
            if(s[0] == goal[i]){
                for(int j=0;j<n;j++){
                    if(s[j] == goal[i+j]){
                        cnt++;
                        flag = true;
                    }else{
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    break;
                }else{
                    cnt=0;
                }
            }
        }
    
        if(cnt == n){
            return true;
        }
        else{
            return false;
        }
    }
};
