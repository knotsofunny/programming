product = 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19
found = 0
answer = 0
while found == 0: #Dont do this
    answer += product
    for j in range(1,21):
        if answer % j != 0:
            found = -1
            break
    found += 1
    
print(answer)
