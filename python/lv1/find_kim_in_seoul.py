# 서울에서 김서방 찾기

'''
Answer 1.

def solution(seoul):
    answer = ''
    
    for i in range(len(seoul)):
        if seoul[i] == "Kim":
            answer = '김서방은 ' + str(i) + '에 있다'
    
    return answer
'''

'''
Answer 2.

def solution(seoul):
    return "김서방은 {}에 있다".format(seoul.index('Kim'))
    # ('김서방은 %d에 있다' %seoul.index('Kim'))
'''
