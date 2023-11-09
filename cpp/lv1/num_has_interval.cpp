// x만큼 간격이 있는 n개의 숫자

#include <string>
#include <vector>

using namespace std;

/* Answer 1.

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int mul = 0;
    
    for(int i = 1; i < n + 1; i++)
    {
        answer.push_back(x * i);
    }
    return answer;
} */


/* Answer 2.
  
vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int mul = 0;
    
    for(int i = 0; i < n; i++)
    {
        answer.push_back(x * (i + 1)); //(x + (x * i))도 가능
    }
    
    return answer;
} */
