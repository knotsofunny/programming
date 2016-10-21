import os 
import sys
print("Enter problem number: ", end="")
filename = input()
print("Answer: ", end="")
sys.stdout.flush()
os.system(filename + '.py')
print("Press any button to continue.", end="")
input()
