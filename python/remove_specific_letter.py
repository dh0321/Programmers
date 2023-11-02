# 특정 문자 제거하기

'''
Answer 1

def solution(my_string, letter):
    
    answer = my_string.replace(letter, '')
        
    return answer

'''


'''
Answer 2

def solution(my_string, letter):
    answer = ''
    
    for string in my_string:
        if string != letter:
            answer += string    
    return answer

'''
