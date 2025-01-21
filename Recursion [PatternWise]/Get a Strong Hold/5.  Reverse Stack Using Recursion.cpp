class Solution{
public:
    void insertAtend(int temp, stack<int>&s){
        if(s.empty()){
            s.push(temp);
            return;
        }
        
        int t = s.top();
        s.pop();
        
        insertAtend(temp,s);
        s.push(t);
        return;
        
    }
    
    void Reverse(stack<int> &St){
        if(St.empty()) return;
        
        int t = St.top();
        St.pop();
        
        Reverse(St);
        
        insertAtend(t,St);
        
    }
};
