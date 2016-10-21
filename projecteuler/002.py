#!/usr/bin/env python
answer = 0
a = 1
b = 1

while b < 2000000:
    a += b
    b = a - b

    if a % 2 == 0:
        answer += a
    
print(answer)
input()
