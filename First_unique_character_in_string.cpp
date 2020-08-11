/*387. First Unique Character in a String
PROBLEM STATEMENT: https://leetcode.com/problems/first-unique-character-in-a-string/

Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode"
return 2.
 

Note: You may assume the string contains only lowercase English letters.

*/
class Solution {
public:
    int firstUniqChar(string s) {
        
        int arr[128];
        memset(arr,-1,sizeof(arr));
        for(int i=0;i<s.length();i++){
          int val=int(s[i]);
            arr[val]+=1;
        }
        for(int i=0;i<s.length();i++){
           int val=int(s[i]);
            if(arr[val]==0)
                return i;
        }
        return -1;
    }
};
