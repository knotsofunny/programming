#!/usr/bin/env python
import os
cwd = os.getcwd()
dirs = os.listdir(cwd)
print(dirs)
for i in range(0, len(dirs) - 1):
    if ".py" not in dirs[i]:
        dirs.remove(dirs[i])

print(dirs)
input()
