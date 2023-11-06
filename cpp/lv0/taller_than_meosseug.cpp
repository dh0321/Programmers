// 머쓴이보다 키 큰 사람

#include <string>
#include <vector>

using namespace std;

/* Answer 1
int solution(vector<int> array, int height) {
    int answer = 0;
    for(int i = 0; i < array.size(); i++)
    {
        if(array[i] > height)
        {
            answer++;
        }
    }   
    return answer;
} */

/* Answer 2
  
int solution(vector<int> array, int height) {
    int answer = 0;
    for(auto num : array)
    {
        if(num > height)
            answer++;
    }
    return answer;
} */
