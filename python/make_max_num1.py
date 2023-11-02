# 최댓값 만들기(1)

'''
Answer 1

def solution(numbers):
    answer = 0
    
    numbers.sort()
    max_num = numbers[len(numbers) - 1]
    second_num = numbers[len(numbers) - 2]
    answer = max_num * second_num
    
    return answer

'''

'''
Answer 2

def solution(numbers):
    numbers.sort(reverse=True)
    
    return numbers[0]*numbers[1]

'''

'''
Answer 3

def solution(numbers):
    numbers.sort()
    return numbers[-2] * numbers[-1]

'''

'''
Answer 4

def solution(numbers):
    return sorted(numbers)[-1] * sorted(numbers)[-2]

'''
