# 중앙값 구하기

'''
Answer 1

def solution(array):
    answer = 0
    
    array.sort()
    medium = int(len(array) / 2)    
    answer = array[medium]
    
    return answer

'''

'''
Answer 2

def solution(array):
    answer = 0

    a = sorted(array)
    medium = int(len(array) / 2)
    answer = a[medium]
    
    return answer

'''

'''
Answer 3

def solution(array):
    
    return sorted(array)[len(array) // 2]

'''
