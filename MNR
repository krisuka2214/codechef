#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t ;
	cin>>t;
	
	while(t--){
	    int n ; cin>>n;
	    	int arr[n];

	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    sort(arr, arr+n);
	    int ans ; 
	    
	    ans  = min(arr[n-2] - arr[1] ,(min( arr[n-3] - arr[0] , arr[n-1] - arr[2] ))) ;
	    
	    cout<<ans<<endl;
	}
	
	return 0 ;

}
