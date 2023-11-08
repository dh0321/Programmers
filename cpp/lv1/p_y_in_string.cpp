//문자열 내 p와 y의 개수

#include <string>
#include <iostream>
using namespace std;

/* Answer 1.
bool solution(string s)
{
    int pnum = 0;
    int ynum = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'p' || s[i] == 'P')
        {
            pnum++;
        }
        else if(s[i] == 'y' || s[i] == 'Y')
        {
            ynum++;
        }
    }
    
    return pnum == ynum;
} */


/* Answer 2.
bool solution(string s)
{
    int pnum = 0;
    int ynum = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        
        if(s[i] == 'p')
        {
            pnum++;
        }
        else if(s[i] == 'y')
        {
            ynum++;
        }
    }
    
    return pnum == ynum;
} */
