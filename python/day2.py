"""
num1, num2 = map(int, input().split())
if num1 > num2:
    print(">")
if num1 < num2:
    print("<")
if num1 == num2:
    print("==")
"""

"""
year = int(input())

if year % 4 == 0:
    if year % 100 != 0 or year % 400 == 0:
        print("1")
    else:
        print("0")

else:
    print("0")
"""

"""
num1 = int(input())
num2 = int(input())

if num1 > 0 and num2 > 0:
    print("1")
if num1 < 0 and num2 > 0:
    print("2")
if num1 < 0 and num2 < 0:
    print("3")
if num1 > 0 and num2 < 0:
    print("4")
"""

"""
hour, min = map(int, input().split())

if hour == 0:
    hour = 24

inputtime = (hour * 60) + min
outputtime = inputtime - 45

rehour = int(outputtime / 60)

if rehour == 24:
    rehour = 0

remin = outputtime % 60

print(rehour, remin)
"""

"""
th, tm = map(int, input().split())
tn = int(input())

tr = (th * 60) + tm
tr += tn

reth = int(tr / 60)

if reth >= 24:
    reth %= 24

retm = tr % 60

print(reth, retm)
"""
"""
num1, num2, num3 = map(int, input().split())

if num1 == num2 and num2 == num3:
    prize = 10000 + (num1 * 1000)

elif num1 == num2 or num1 == num3 or num2 == num3:
    if num1 == num2 or num1 == num3:
        same = num1
    else:
        same = num2
    
    prize = 1000 + (same * 100)

else:
    prize = max(num1,num2,num3) * 100

print(prize)
"""
