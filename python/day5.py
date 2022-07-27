"""
def cycle(num):
    if num == 0:
        return 1
    
    return num * cycle(num-1)

num = int(input())
print(cycle(num))


def fibonacci(num):
    if num <= 1:
        return num
    return fibonacci(num-1) + fibonacci(num-2)

num = int(input())
print(fibonacci(num))



def recursive(count, num):
    print("____" * count + '"재귀함수가 뭔가요?"')
    print("____"*i + '"재귀함수가 뭔가요?"')


    if count == num:
        print("____" * count + '"재귀함수는 자신을 호출하는 함수라네"')
        print("____"*i + '"재귀함수는 자기 자신을 호출하는 함수라네"')
    
    else:
        print("____" * count + '"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.')
        print("____"*i + '"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.')
        print("____" * count + "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.")
        print("____"*i + "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.")
        print("____" * count + '그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."')
        
        recursive(count+1, num)
    
    print("____" * count + "라고 답변하였지.")

num = int(input())
print("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.")
recursive(0, num)



n = int(input())

def star(l):
    if l == 3:
        return ['***', '* *', '***']

    arr = star(l//3)
    stars = []

    for i in arr:
        stars.append(i*3)

    for i in arr:
        stars.append(i+' '*(l//3)+i)

    for i in arr:
        stars.append(i*3)

    return stars


print('\n'.join(star(n)))
"""

def hanoi(n, a, b):
    if n > 1:
        hanoi(n-1, a, 6-a-b)
    print(a, b)

    if n > 1:
        hanoi(n-1, 6-a-b, b)


n = int(input())
print(2**n - 1)
hanoi(n, 1, 3)