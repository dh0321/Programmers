# 예산
'''
Answer 1.
def solution(d, budget):
    answer = 0
    d.sort()
    for item in d:
        if item > budget:
            break
        else:
            budget -= item
            answer += 1
    
    return answer
'''

'''
Answer 2.
def solution(d, budget):
    d.sort()
    while budget < sum(d):
        d.pop()
    return len(d)

'''
