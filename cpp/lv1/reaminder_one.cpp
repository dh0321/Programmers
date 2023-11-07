// 나머지가 1이 되는 수 찾기

#include <string>
#include <vector>

using namespace std;

/* Answer 1.

int solution(int n) {
    int answer = 0;
    
    for(int i = 2; i < n; i++)
    {
        if(n % i == 1)
        {
            answer = i;
            break;
        }
    }
    
    return answer;
} */

/* Answer 2.

int solution(int n) {
    
    for(int i = 2; i < n; i++)
    {
        if(n % i == 1)
        {
            return i;
        }
    }
} */
