class Solution {
public:
    string simplifyPath(string path) {

        // declare a stack to contain the temp strings
        stack <string> st;
        // declare a string variable to contain the final stack elements
        string fin;
        

        // iterate through the path from / to /
        for (int i = 0; i < path.size(); i++){
            if(path[i] == '/'){
                continue;
            }
            // create a string variable to contain the temp strings
            string temp;
            //look for the next /, if found keep the elements(path or its part) into the temp string
            while(i< path.size() && path[i] !='/'){
                //add path to temp string
                temp+= path[i];
                ++i;
            }
            // string temp consist from slash to slash
            // check for . 
            if (temp == \.\){
                continue;
            }
            // check for ..
            else if (temp == \..\){
                // check if the stack is empty
                if (!st.empty()){
                    st.pop();
                }
            }
            else{
                // psuh the temp string to the stack
                st.push(temp);
            }


        }
        // add all the elements in the final string variable
        while(!st.empty()){
            fin = \/\ + st.top() + fin;
            // empty the stack
            st.pop();
        }
        // if no directory or file is present return /
        if (fin.size() == 0){
            return \/\;
        }
        return fin;

    }
};