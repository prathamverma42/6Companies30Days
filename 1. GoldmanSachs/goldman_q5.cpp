class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    vector<long long int> v(n+1);
	    long long int c2=0,c3=0,c5=0;
	    v[0]=1;
	    for(int i=1;i<=n;i++){
	        v[i]=min({2*v[c2],3*v[c3],5*v[c5]});
	        if(v[i]==2*v[c2])
	        c2++;
	        if(v[i]==3*v[c3])
	        c3++;
	        if(v[i]==5*v[c5])
	        c5++;
	    }
	    return v[n-1];
	}
};