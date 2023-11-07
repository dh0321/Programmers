// 문자열을 정수로 바꾸기

/* Answer 1

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = stoi(s);   
    
    return answer;
}

stoi = sring to integer
C++11 이후로 사용. */


/* Answer 2

#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss;
    ss.str(s);
    ss >> answer;

    return answer;
}

C++11 이전 버전. */
