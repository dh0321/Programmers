// 최댓값 만들기 1

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* Answer 1

int solution(vector<int> numbers) {
    int answer = 0;
    int vec_size = 0;
    
    sort(numbers.begin(), numbers.end());
    vec_size = numbers.size();
    answer = numbers[vec_size - 1] * numbers[vec_size - 2];
    
    return answer;
} */


/* Answer 2

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    answer = numbers[0] * numbers[1];
    
    return answer;
} */


/* Answer 3

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    sort(numbers.rbegin(), numbers.rend());
    answer = numbers[0] * numbers[1];
  
    return answer;
} */
