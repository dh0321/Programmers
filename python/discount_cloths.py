# 옷가게 할인 받기

'''
Answer 1

def solution(price):
    answer = 0
    
    if price >= 500000:
        answer = price * 0.8
    elif price >= 300000 and price < 500000:
        answer = price * 0.9
    elif price >= 100000 and price < 300000:
        answer = price * 0.95
    else:
        answer = price
    
    return int(answer)

'''

'''
Answer 2

def solution(price):

    discount_rates = {500000: 0.8, 300000: 0.9, 100000: 0.95, 0: 1}
    for discount_price, discount_rate in discount_rates.items():
        if price >= discount_price:
            return int(price * discount_rate)

'''
