#!/usr/bin/env python
tenB = 10000000000
answer = 0

for i in range(1, 1001):
    answer += (i ** i) % tenB
    if answer > tenB:
        answer = answer % tenB

print(answer)
input()
