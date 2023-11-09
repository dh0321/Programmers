// 서울에서 김서방 찾기

/* Answer 1.

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    for(int i = 0; i < seoul.size(); i++)
    {
        if(seoul[i] == "Kim")
        {
            answer = "김서방은 " + to_string(i) + "에 있다";
            break;
        }
    }
    return answer;
} */

/* Answer 2.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    int pos = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    answer = "김서방은 " + to_string(pos) + "에 있다";
    
    return answer;
} */
