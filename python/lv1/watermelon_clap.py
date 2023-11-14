# 수박수박수박수박수박수?

'''
Answer 1.
def solution(n):
    answer = ''
    
    for i in range(n):
        if i % 2 == 0:
            answer += "수"
        else:
            answer += "박"
    
    return answer
'''

'''
Answer 2.
def solution(n):
    str = "수박"*n
    
    return str[:n]
'''

'''
Answer 3.
def solution(n):
    return "수박" * (n//2) + "수" * (n%2)
'''

'''
Answer 4.
def solution(n):
    return "".join(["수박"[i%2] for i in range(n)])
'''
