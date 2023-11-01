# 점의 위치 구하기

'''
answer 1

def solution(dot):

    if dot[0] > 0 and dot[1] > 0:
        return 1
    
    elif dot[0] < 0 and dot[1] > 0:
        return 2
    
    elif dot[0] < 0 and dot[1] < 0:
        return 3
    
    else:
        return 4

'''
# python에서는 && 못쓴다. &와 and를 구분하자.
# bool 논리 연산을 할 때는 and를 써야한다.

'''
answer 2

def solution(dot):

    if dot[0] > 0:
        if dot[1] > 0:
            return 1
        return 4
        
    else:
        if dot[1] > 0:
            return 2
        return 3
'''
