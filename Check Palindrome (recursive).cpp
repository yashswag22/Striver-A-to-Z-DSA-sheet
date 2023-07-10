int check(string &str, int i, int n,int chk)
{

    if(chk==1)
    return 1;
    
  if(i<= n/2)
  {   if(str[i]==str[n-i])
        {
            i++;
           int k= check(str,i,n,0);
           
           return k;
        } 
         else if (str[i] != str[n - i])
         {
             return 1;
        }
  }
  else
  return 0;

  

}



bool isPalindrome(string& str) {
   int n = str.length()-1;
   int chk= check(str,0,n,0);
    if(chk== 1)
    return false;
    else
    return true;
}
