// 평균 구하기

#include <string>
#include <vector>

using namespace std;

/* Answer 1.

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    
    answer = sum / arr.size();
    
    
    return answer;
} */


/* Answer 2.

double solution(vector<int> arr) {
    double answer = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        answer += arr[i];
    }
    
    answer = answer / arr.size();
    
    return answer;
} */
