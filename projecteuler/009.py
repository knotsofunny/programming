#!/usr/bin/env python
def p009():
    for a in range(4,1000):
        for b in range(3, a):
            c = (a ** 2 + b ** 2) ** 0.5
            if int(c) == c and a + b + c == 1000:
                return (a * b * int(c))

print(p009())
input()
