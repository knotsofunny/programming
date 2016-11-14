answer = 0
for i in range(110, 999, 11):
    for j in range(100,999):
        if str(i * j) == str(i * j)[::-1] and i * j > answer:
            answer = i * j

            
print(answer)      
