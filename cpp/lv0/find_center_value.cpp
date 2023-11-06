// 중앙값 구하기

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* Answer 1
int solution(vector<int> array) {
    int answer = 0;
    
    sort(array.begin(), array.end());
    
    int medium = array.size() / 2;
    answer = array[medium];
    
    return answer;
} */

/* Answer 2
int solution(vector<int> array) {

    sort(array.begin(), array.end());

    return array[array.size() / 2];
} */
