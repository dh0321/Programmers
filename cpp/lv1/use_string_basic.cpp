//문자열 다루기 기본

#include <string>
#include <vector>

using namespace std;

/* Answer 1.
bool solution(string s) {
    
    if(s.length() == 4 || s.length() == 6)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]) != 0)
            {
                return false;
            }
        }
     return true;   
    }
    return false;
} */


/* Answer 2.
bool solution(string s) {

for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))
            return false;
    }

    return s.size() == 4 || s.size() == 6 ? true : false;
} */


