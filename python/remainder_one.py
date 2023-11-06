# 나머지가 1이 되는 수 찾기

'''
Answer 1

def solution(n):
    answer = 0
    
    for x in range(2, n):
        if n % x == 1:
            answer = x
            break
            
    return answer
'''

'''
Answer 2

def solution(n):
    answer = 2
    while True:
        if n % answer == 1:
            break
        else:
            answer += 1
    return answer
'''

'''
Answer 3

def solution(n):
    answer = min([x for x in range(1, n+1) if n % x == 1])
    return answer

'''

'''
Answer 4

def solution(n):
    return [x for x in range(1,n+1) if n%x==1][0]
'''

