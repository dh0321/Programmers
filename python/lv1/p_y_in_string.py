# 문자열 내 p와 y의 개수

'''
Answer 1.

def solution(s):
    pnum = 0
    ynum = 0

    for i in range(0, len(s)):
        if s[i] == "p" or s[i] == "P":
            pnum += 1
            
        elif s[i] == "y" or s[i] == "Y":
            ynum += 1
            
    return pnum == ynum  # True if pnum == ynum else False
'''

'''
Answer 2.

def solution(s):
    return  s.lower().count('p') == s.lower().count('y')

'''
