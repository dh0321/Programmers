#문자열 뒤집기

'''
answer 1

def solution(my_string):
    answer = ''
    
    answer = my_string[::-1]
    
    return answer
'''

'''
answer 2

def solution(my_string):
    answer = ''
    
    for i in range(len(my_string) - 1, -1, -1) :
        answer += my_string[i]
    
    return answer

'''

'''
answer 3

def solution(my_string):
    answer = ''
    my_list = list(my_string)
    my_list.reverse()
    
    answer = ''.join(my_list)
    
    return answer
  '''

'''
answer 4

def solution(my_string):

    answer = ''.join(reversed(my_string))
    
    return answer

'''
