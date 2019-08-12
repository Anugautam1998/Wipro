#include <bits/stdc++.h>
using namespace std;
//{{[]}}
// stack<char>st;
// st.push(char);
// char t=st.top();
// st.pop();
// st.empty()
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l=s.length();
	    int f=0;
	    stack<char>st;
    	    for(int i=0;i<l;i++)
    	    {
    	        if(s[i]=='{'||s[i]=='('||s[i]=='[')
    	        {
    	            st.push(s[i]);
    	        }
    	        else
    	        { 
    	           if(!st.empty()){// check stack   empty or not if empty then break and f=1 else  check for 
    	            char t=st.top();
    	            if((s[i]==')'&&t=='(')||(s[i]=='}'&&t=='{')||(s[i]==']'&&t=='['))
    	            {   
        	            st.pop();
        	            f=0;
    	            }
    	            else{
    	                f=1;
    	                break;
    	            }
    	               
    	           }else{
    	               f=1;
    	               break;
    	           } 
    	           
    	        }
    	    }
    	    if(f==0&&st.empty())
    	    cout<<"balanced"<<endl;
    	    else 
    	    cout<<"not balanced"<<endl;
    	    
    	    
	    }
	return 0;
}
