"""
num = int(input())
score = list(map(int, input().split()))

ms = max(score)
sum = 0

for x in score:
    x = x / ms * 100
    sum += x

result = float(sum / num)
print(result)


count = int(input())
scores = []

for i in range(count):
    score = 0
    x = input()
    string = list(x)
    sum = 0

    for j in string:

        if j == 'O':
            score += 1
            sum += score
        
        else:
            score = 0
    
    scores.append(sum)

for y in scores:
    print(y)



row = int(input())
avgs = []

for i in range(row):
    string = list(map(int, input().split()))
    column = string.pop(0)
    avg = sum(string[:]) / column
    count = 0

    for j in string:
        if j > avg:
            count += 1
    
    result = count / column * 100
    avgs.append(result)

for k in avgs:
    print("%.3f" %float(k), "%", sep='')
"""

"""
def solve (a: list) -> int:
    r = sum(a[:])
    return r



def d(n):
    n = n + sum(map(int,str(n)))
    return n

notself = []

for x in range(1, 10001):
    notself.append(d(x))

notself = set(notself)

for y in range(1, 10001):
    if y not in notself:
        print(y)



def seq(num):
    count = 0
    
    for x in range(1, num+1):
        numbers = list(map(int, str(x)))
        
        if x < 100:
            count += 1
        
        elif numbers[0] - numbers[1] == numbers[1] - numbers[2]:
            count += 1

    return count

num = int(input())
print(seq(num))

"""

"""
chara = input()
print(ord(chara))


size = int(input())
sumofnumbers = sum(list(map(int, input())))
print(sumofnumbers)



S = input()
alpha = list(range(97, 123))

for x in alpha:
    result = S.find(chr(x))
    print(result)



count = int(input())

for x in range(count):
    num, S = input().split()
    P = ""

    for y in S:
        P += int(num) * y
    
    print(P)
    


string = input().upper()
letters = list(set(string))
counts = []

for x in letters:
    count = string.count(x)
    counts.append(count)

if counts.count(max(counts)) > 1:
    print("?")

else :
    maxIndex = counts.index(max(counts))
    print(letters[maxIndex])



sentence = input().split()
print(len(sentence))



A, B = list(input().split())

reA = ''.join(reversed(A))
reB = ''.join(reversed(B))

reA = int(reA)
reB = int(reB)

print(reA if reA > reB else reB)



dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
string = input()
totalTime = 0

for i in string:
    for j in dial:
        if i in j:
            totalTime += dial.index(j) + 3

print(totalTime)



string = input()
cro = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for i in cro:
    string = string.replace(i, '.')

print(len(string))

"""

num = int(input())
count = num

for i in range(num):
    string = input()
    for j in range(0, len(string)-1):
        if string[j] == string[j+1]:
            pass
        elif string[j] in string[j+1:]:
            count -= 1
            break

print(count)

