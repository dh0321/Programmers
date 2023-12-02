#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    //체육복 없음 = -1, 있음(기본) = 0, 여벌 = 1

    int answer = 0;
    vector<int> student(n + 2, 0);

    /*for (int i = 0; i < lost.size(); i++)
    {
        student[lost[i]]--;
    }

    for (int i = 0; i < reserve.size(); i++)
    {
        student[reserve[i]]++;
    }*/

    for (int i : lost) student[i]--;
    for (int i : reserve) student[i]++;

    for (int i = 1; i <= n; i++)
    {
        if (student[i] == -1)
        {
            if (student[i - 1] == 1)
            {
                student[i] = 0;
                student[i - 1] = 0;
            }
            else if (student[i + 1] == 1)
            {
                student[i] = 0;
                student[i + 1] = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (student[i] != -1)
        {
            answer++;
        }
    }

    return answer;
}
