// 세균 증식

#include <string>
#include <vector>

using namespace std;

/* Answer 1
int solution(int n, int t) {
    int answer = 0;
    int num = n;
    
    for(int i = 0; i < t; i++)
    {
        num = num * 2;  // num *= 2;
    }
    
    answer = num;
    
    return answer;
} */


/* Answer 2
int solution(int n, int t) {
    return n << t;
} 

shift 연산자 (비트 연산, 비트 이동 연산) 
<< 연산자 (왼쪽 shift) : << 뒤에 수만큼 비트가 왼쪽으로 이동하고 가장 오른쪽은 0으로 채움.

ex) int num1 = 10;  // 00000000 00001010
int shift1 = num1 << 1;  // 00000000 00010100
int shift2 = num1 << 2;  // 00000000 00101000

*/

/* Answer 3
int solution(int n, int t) {
    int answer = n * pow(2,t);
    return answer;
} 

pow 함수 : #include <cmath>를 해주어야한다. double, float, long 3가지 반환 지원.
double pow(double base, double n)
float pow(float base, float n)
long double pow(long double base, long double n)

base : 제곱할 숫자, n : 승수
ex) double result = pow(2, 10) // 2의 10승

*/
