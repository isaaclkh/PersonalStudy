"""
#loop

x = int(input())
for i in range(9):
    print(x,"*", i+1, "=", x*(i+1))


x = int(input())
ans = []

for y in range(x):
    a, b = map(int, input().split())
    ans.append(a+b)

for z in ans:
    print(z)


x = int(input())
ans = 0
for y in range(x+1):
    ans += y
print(ans)

import sys

x = int(input())
ans = []
for y in range(x):
    a,b = map(int, sys.stdin.readline().split())
    ans.append(a+b)
for z in ans:
    print(z)


x = int(input())
for y in range(x):
    print(y+1)


x = int(input())
z = x
for y in range(x):
    print(z)
    z-=1


x = int(input())
ans = []
for y in range(x):
    a,b = map(int, input().split())
    ans.append(a+b)
c = 1
for z in ans:
    print("Case #%d:" %c, z)
    c+=1


x = int(input())
ans = []
for y in range(x):
    a, b = map(int, input().split())
    ansstr = str(a) + " + " + str(b) + " = "
    answer = a+b
    ansstr += str(answer)
    ans.append(ansstr)

c = 1
for z in ans:
    print("Case #%d:" %c, z)
    c += 1


x = int(input())
a = x-1

for y in range(x):
    for b in range(a-1, -1, -1):
        print(" ", end='')
    a-=1
    for z in range(y+1):
        print("*", end='')
    print()


n, x = map(int, input().split())
a = list(map(int, input().split()))

for b in a:
    if b < x:
        print(b, end=' ')


ans = []
while 1:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    ans.append(a+b)

for x in ans:
    print(x)


ans = []

while True:
    try:
        a,b = map(int, input().split())
        ans.append(a+b)
    except:
        break

for x in ans:
    print(x)


x = int(input())
check = x
count = 1

while True:
    a = int(x/10)
    b = x % 10
    c = (a + b) % 10

    if (b * 10 + c) == check:
        break
    
    else:
        x = (b * 10) + c
        count += 1

print(count)


#array

x = input()
a = list(map(int, input().split()))
print(min(a), max(a))


arr = []

for x in range(9):
    y = int(input())
    arr.append(y)

print(max(arr))
print((arr.index(max(arr)))+1)


a = int(input())
b = int(input())
c = int(input())

ans = a * b * c
arr = []
count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0] 

while True:
    arr.append(ans % 10)
    ans = int(ans / 10)

    if ans <= 0:
        break

for n in range(10):
    for x in arr:
        if x == n:
            count[n] += 1

for y in count:
    print(y)


arr = []

for n in range(10):
    x = int(input())
    arr.append(x % 42)

arr = set(arr)
print(len(arr))

"""
