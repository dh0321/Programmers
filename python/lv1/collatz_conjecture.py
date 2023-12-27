'''
Answer 1.

def solution(num):
    answer = 0
    
    if num == 1:
        answer = 0
    
    while num != 1:
        if num % 2 == 0:
            num = num / 2
        else:
            num = num * 3 + 1
        answer = answer + 1
        
        if answer >= 500:
            answer = -1
            break;
        
    return answer
'''

'''
Answer 2.

def solution(num):
    answer = 0
    
    while num != 1:
        num = num / 2 if num % 2 == 0 else num * 3 + 1
        answer = answer + 1;

        if answer >= 500:
            answer = -1
            break;
        
    return answer
'''
