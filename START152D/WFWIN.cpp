#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t ; cin>>t;
	while(t--){
	   
	   int m , p2; cin>>m>>p2;
	   int n = 0 ; 
	   int p = p2;
	   
	   while(m+n<299 && p<=1000 ){
	      
        p = p2 + (n+1)*20 + (m+n+1);
         
          if(p>1000) break; 
          
          n++;
	   }
	   
	   cout<<n<<endl;
	   
	}
	
	return 0;

}
