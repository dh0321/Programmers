// 문자열 뒤집기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* Answer 1.

string solution(string my_string) {
    string answer = "";
    
    reverse(my_string.begin(), my_string.end());
    answer = my_string;
    
    return answer;
} */


/* Answer 2.

string solution(string my_string) {
    reverse(my_string.begin(), my_string.end());
    
    return my_string;
} */


/* Answer 3.

string solution(string my_string) {
    string answer = "";
    
    for(int i = my_string.size() - 1; i >= 0; i--)
    {
        answer += my_string[i];
    }
    
    return answer;
} */
