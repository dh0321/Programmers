// 예산
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* Answer 1.
int solution(vector<int> d, int budget) {
    int sum = 0;
    int count = 0;
    
    sort(d.begin(), d.end());
    
    for(int i = 0; i < d.size(); i++)
    {
        sum += d[i];
        if(sum <= budget)
        {
            count++;
        }
        else
            break;
    }
    return count;
} */

/* Answer 2.
int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    for(int i = 0; i < d.size(); i++)
        if(budget - d[i] >= 0){
            budget -= d[i];
            answer++;
        }
    return answer;
} */

/* Answer 3.
int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());

    for (int i = 0; i < d.size(); i++)
    {
        if (d[i] > budget)
            break;
        budget -= d[i];
        answer++;
    }
    return answer;
} */
