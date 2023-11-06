# 배열 두 배 만들기

'''
answer 1

def solution(numbers):
    answer = []
    
    for i in range(len(numbers)):
        answer.append(numbers[i] * 2)
    
    return answer

'''

'''
answer 2

def solution(numbers):
    answer = []
    
    for i in numbers:
        answer.append(i * 2)
    
    return answer
'''

'''
answer 3

def solution(numbers):
    
    return [num * 2 for num in numbers]

'''

'''
answer 4

def solution(numbers):
    
    return list(map(lambda x: x * 2, numbers))

'''
