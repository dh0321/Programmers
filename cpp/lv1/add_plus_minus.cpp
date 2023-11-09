// 음양 더하기

#include <string>
#include <vector>

using namespace std;

/* Answer 1.
  
int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(int i = 0; i < absolutes.size(); i++)
    {
        if(signs[i] == true) //signs[i]로만 작성 가능
        {
            answer += absolutes[i];
        }
        else
        {
            answer -= absolutes[i];
        }
    }
    return answer;
} */

/* Answer 2.

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
  
    for(int i = 0; i < signs.size(); i++)
    {
        if(!signs[i]) absolutes[i] *= -1;
        answer += absolutes[i];
    }
    return answer;
} */
