# 문자열 다루기 기본

'''
Answer 1.
def solution(s):

    if len(s) == 4 or len(s) == 6:
        for i in range(0, len(s)):
            if s[i].isalpha():
                return False
        return True
    else:
        return False
'''

'''
Answer 2.
def solution(s):
    return s.isdigit() and len(s) in [4, 6]
'''
    
'''
Answer 3.
def solution(s):
  try:
      int(s)
  except:
      return False
  return len(s) == 4 or len(s) == 6
'''
  
