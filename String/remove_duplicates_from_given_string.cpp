#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    
	    string ans="";
	    unordered_set<char>s;
	    
	    for(int i=0;i<str.length();i++)
	    {
	        if(s.find(str[i])==s.end())
	        {
	            ans+=str[i];
	            s.insert(str[i]);
	        }
	       
	        
	    }
	    return ans;
	}
};