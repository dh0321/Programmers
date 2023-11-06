# 머쓱이보다 키 큰 사람

'''
Answer 1

def solution(array, height):
    answer = 0
    
    for num in array:
        if num > height:
            answer += 1

    return answer

'''


'''
Answer 2

def solution(array, height):
    return sum(1 for a in array if a > height)

'''
