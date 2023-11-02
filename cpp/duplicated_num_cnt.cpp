//중복된 숫자 개수

#include <string>
#include <vector>

using namespace std;

/* Answer 1

int solution(vector<int> array, int n) {
    int answer = 0;
    
    for(int i = 0; i < array.size(); i++)
    {
        if(array[i] == n)
        {
            answer += 1; //answer++;
        }
    }
    
    return answer;
} */

/* Answer 2
  
int solution(vector<int> array, int n) {
    int answer = 0;
  
    for(auto i : array) if(i == n) answer++;
  
    return answer;
} */
  

