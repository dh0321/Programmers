# 음양 더하기

'''
Answer 1.

def solution(absolutes, signs):
    answer = 0
    
    for i in range(len(absolutes)):
        if signs[i] == False:
            answer -= absolutes[i]
        else:
            answer += absolutes[i]
    
    return answer
'''

'''
Answer 2.

def solution(absolutes, signs):
    answer=0
    
    for absolute,sign in zip(absolutes,signs):
        if sign:
            answer += absolute
        else:
            answer -= absolute
    return answer
'''

'''
Answer 3.

def solution(absolutes, signs):
    return sum(absolutes if sign else -absolutes for absolutes, sign in zip(absolutes, signs))
'''
