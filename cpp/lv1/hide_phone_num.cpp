#include <string>
#include <vector>

using namespace std;

/* Answer 1.
string solution(string phone_number) {
    string answer = "";
    
    for(int i = 0; i < phone_number.length() - 4; i++)
    {
        answer += "*";
    }
    
    for(int i = phone_number.length() - 4; i < phone_number.length(); i++)
    {
        answer += phone_number[i];
    }
    
    return answer;
} */

/* Answer 2.
string solution(string phone_number) {
    string answer = "";

    for (int i = 0; i < phone_number.size() - 4; i++ )
    {
        phone_number[i] = '*';
    }

    answer = phone_number;

    return answer;
} */
