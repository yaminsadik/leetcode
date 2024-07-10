class Solution {
public:
    bool isValid(string s) {
        //declare a stack to store the opening braces.
        stack <int> p;
        for (char c : s){
            if(c == '(' || c == '{' || c == '['){
                p.push(c);
            }
            // check the closing parenthesis and if the stack is empty
            else{
                if(p.empty() || 
                p.top() == '{' && c != '}' ||
                p.top() == '(' && c != ')' ||
                p.top() == '[' && c != ']'
                ){
                    return false;
                    
                }
                else {
                    /* if the above condition are not triggered, the parentheses matched and
                    should remove the opening parentheses from the stack. */ 
                    p.pop();
                }
            }
            
        }
        // after checking all the condition if the stack is empty means brackets matched. 
            return p.empty();   
        
    }
};