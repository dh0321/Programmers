# x만큼 간격이 있는 n개의 숫자

'''
Answer 1.

def solution(x, n):
    answer = []
    
    for i in range(0, n):
        answer.append(x * (i + 1))
    
    return answer
'''

'''
Answer 2.

def solution(x, n):
    return [x * (i + 1) for i in range(n)]
'''

