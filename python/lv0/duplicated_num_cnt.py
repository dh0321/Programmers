# 중복된 숫자 개수

'''
Answer 1

def solution(array, n):
    count = 0
    
    for num in array:
        if num == n:
            count += 1
    
    return count

'''

'''
Answer 2

def solution(array, n):
    return array.count(n)

파이썬의 count 함수는 변수.count(찾는요소) 로 쓰면 된다.

'''

'''
Answer 3

def solution(array, n):
    answer = 0
    for i in range(0, len(array)):
        if n == array[i] :
            answer += 1
    return answer

'''
