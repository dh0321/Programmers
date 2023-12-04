#include <vector>
#include<algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    answer = arr;

    return answer;
}

/* Answer 2.

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.push_back(arr[0]);
    
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] != answer.back())
        {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}

*/
