// 점의 위치 구하기
#include <string>
#include <vector>

using namespace std;

/* Answer 1
int solution(vector<int> dot) {
    int answer = 0;
    
    if(dot[0] > 0)
    {
        if(dot[1] > 0)
        {
            answer = 1;
        }
        else
        {
            answer = 4;
        }
    }
    
    else
    {
        if(dot[1] > 0)
        {
            answer = 2;
        }
        else
        {
            answer = 3;
        }
    } 
    return answer;
} */

/* Answer 2
int solution(vector<int> dot) {

    if(dot[0] > 0 && dot[1] > 0)
    {
        return 1;
    }
    
    else if(dot[0] < 0 && dot[1] > 0)
    {
        return 2;
    }
    
    else if(dot[0] < 0 && dot[1] < 0)
    {
        return 3;
    }
    
    else
    {
        return 4;
    }
} */

/* Answer 3
int solution(vector<int> dot) {

    return dot[0] > 0 ? (dot[1] > 0 ? 1 : 4) : (dot[1] < 0 ? 3 : 2);

} */
  
