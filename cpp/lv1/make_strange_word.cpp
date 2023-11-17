// 이상한 문자 만들기

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            count = 0;
            answer += ' ';
            continue;
        }
        
        if(count % 2 == 0)
        {
            answer += toupper(s[i]);
            count++;
        }
        else
        {
            answer += tolower(s[i]);
            count++;
        }
    }
    return answer;
}
