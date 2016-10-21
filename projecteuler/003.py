#!/usr/bin/env python
num = 600851475143
i = 2
while i < num:
    if num % i == 0:
        num = num / i
        i = 2
    i += 1
print(int(num))
