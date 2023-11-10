/* Answer 1.

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    
    for(int i = 0; i < a.size(); i++)
    {
        answer += a[i] * b[i];
    }
    
    return answer;
} */


/* Answer 2.
내적 함수 inner_product 사용
두 개의 시작 위치를 인자로 받아 각 벡터의 원소를 곱하고 더한 결과를 반환.

#include <vector>
#include <numeric>
  
using namespace std;

int solution(vector<int> a, vector<int> b) {    
    return inner_product(a.begin(),a.end(),b.begin(),0);
} */
