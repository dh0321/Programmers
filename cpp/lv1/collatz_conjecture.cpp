#include <string>
#include <vector>

using namespace std;

/* Answer 1.
int solution(int num) {
    int answer = 0;
    long long n = num;
    
    if(n == 1)
        answer = 0;
    
    while(n != 1 & answer < 500)
    {
        if(n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
        
        answer++;
    }
    
    if(answer >= 500)
        answer = -1;
    
    return answer;
} */


/* Answer 2.
int solution(int num) {
    int answer = 0;
    long long n = num;
    
    while(true)
    {
        if(n == 1)
            break;
        
        n % 2 == 0 ? n = n / 2 : n = n * 3 + 1;
        answer++;
        
        if(answer >= 500)
        {
            answer = -1;
            break;
        }
    }
    
    return answer;
} */

