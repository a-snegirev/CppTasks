#include <string>
#include <map>
#include <stack>
#include <iostream>
class bracechecker{
    public:
    static bool isbalanced( const std::string& st){
       std::stack<char> brace;
       std::map<char,char> br{
           {'}','{'},{']','['},{')','('}
       };
       for (char i : st){
           if (i == '[' || i == '{' || i == '('){
            brace.push(i);
           }
           else{
                if (i == '}' || i == ']' || i == ')'){
                    if (brace.top() == br[i] ){
                        brace.pop();
                        std::cout << br[i];
                    }        
                    else {
                        return false;
                    }
                }
                else{
                    continue;
                }
            }
       }
       if (brace.empty()){
           return true;
       }
       else {
           return false;
       }
    }
};
