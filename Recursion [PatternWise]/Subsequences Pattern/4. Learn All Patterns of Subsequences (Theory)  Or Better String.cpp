class Solution {
  public:
   void generate(int index, string org, string str, set<string> &s){
       // base case
       if(index == org.size()) return;
     
       
       // take 
       
       str+=org[index];
       s.insert(str);
       generate(index +1, org, str,s);
       
       // not take
       str.pop_back();
       s.insert(str);
       generate(index +1, org, str,s);
       
       return;
   }
   
    string betterString(string str1, string str2) {
        
        set<string>s1;
        set<string>s2;
        
        generate(0,str1,"",s1);
        generate(0,str2,"",s2);
        
        if(s1.size() >= s2.size()) return str1;
        else return str2;
        
        
    }
};
