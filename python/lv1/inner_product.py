# 내적

'''
Answer 1.

def solution(a, b):
    answer = 0
    
    for i in range(len(a)):
        answer += a[i] * b[i]
    
    return answer
'''

'''
Answer 2.

def solution(a, b):
    answer = 0
    
    for x, y in zip(a,b):
        answer += x * y
        
    return answer

'''

'''
Answer 3.

def solution(a, b):

    return sum([x*y for x, y in zip(a,b)])
'''
