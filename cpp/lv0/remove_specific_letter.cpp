// 특정 문자 제거하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* Answer 1

string solution(string my_string, string letter) {

    my_string.erase(remove(my_string.begin(),my_string.end(), letter[0]),my_string.end());
    return my_string;
} */


/* Answer 2

string solution(string my_string, string letter)
{
    string answer="";
  
    for(int i=0; i<my_string.length(); i++)
    {
      if(my_string[i]!=letter[0])
      {
        answer+=my_string[i];
      }
    }
  
    return answer;
} */
