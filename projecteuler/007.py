#!/usr/bin/env python

def primeSieve(m):
    a = list(range(2, m + 1))
    for i in range(1, int(m / 2)):
        print(a[i])

primeSieve(25)
