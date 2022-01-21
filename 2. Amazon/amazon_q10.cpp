class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    map<char,int> m;
	    m['!']=1;
	    m['#']=1;
	    m['$']=1;
	    m['%']=1;
	    m['&']=1;
	    m['*']=1;
	    m['@']=1;
	    m['^']=1;
	    m['~']=1;
	    for(int i=0;i<n;i++){
	        m[nuts[i]]++;
	    }
	    int i=0;
	    for(auto x:m){
	        if(x.second>1){
	            nuts[i]=x.first;
	            bolts[i]=x.first;
	            i++;
	        }
	    }
	}
};