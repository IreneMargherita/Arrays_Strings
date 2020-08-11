/*
PROBLEM STATEMENT:https://leetcode.com/problems/valid-anagram/
Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
Note:
You may assume the string contains only lowercase alphabets.

*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        //method 1 using sorting O(n log n)
   /* sort(s.begin(),s.end());
sort(t.begin(),t.end());   
        if(s==t)
            return true;
        return false;*/
        
        //METHOD 2 O(n)
    int arr1[128];
        int arr2[128];
        memset(arr1,0,sizeof(arr1));
        memset(arr2,0,sizeof(arr2));
        for(int i=0;i<s.length();i++){
            int val=int(s[i]);
            arr1[val]+=1;
            }
        for(int i=0;i<t.length();i++){
            int val=int(t[i]);
            arr2[val]+=1;
            }
        for(int i=0;i<128;i++){
            if(arr1[i]!=arr2[i])
            return false;
            }
        return true;
    }
    
};
