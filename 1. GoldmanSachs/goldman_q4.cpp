string encode(string s)
{     
  //Your code here 
  string ans = "";
  int i=0;
  int count=1;
  while(s[i]!='\0'){
      if(s[i]==s[i+1]){
          count++;
      }else{
          ans=ans+s[i]+to_string(count);
          count=1;
      }
      i++;
  }
  return ans;
}     