#include <bits/stdc++.h>
using namespace std;
   int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<=n-1;i++)
	    for(int j=0;j<=n-1;j++)
	    {
	        cin>>a[i][j];
	    }
	    for(int i=0;i<=n-1;i++)
	    for(int j=0;j<=n-1;j++)
	    {
	       
	        cout<<a[j][i]<<" ";
	    }
    cout<<endl;
    
}
	return 0;
}
