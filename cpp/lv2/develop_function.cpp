#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;

    for (int i = 0; i < progresses.size(); i++)
    {
        if ((100 - progresses[i]) % speeds[i] == 0) {
            q.push((100 - progresses[i]) / speeds[i]);
        }
        else {
            q.push((100 - progresses[i]) / speeds[i] + 1);
        }
    }

    while (!q.empty())
    {
        int count = 1;
        int current = q.front();
        q.pop();

        while (!q.empty() && q.front() <= current)
        {
            count++;
            q.pop();
        }
        answer.push_back(count);
    }

    return answer;
}


/* Answer 2.

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    int day;
    int max_day = 0;
    for (int i = 0; i < progresses.size(); ++i)
    {
        day = (99 - progresses[i]) / speeds[i] + 1;

        if (answer.empty() || max_day < day)
            answer.push_back(1);
        else
            ++answer.back();

        if (max_day < day)
            max_day = day;
    }

    return answer;
}

*/
