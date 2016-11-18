import math
#        0 1 2 3 4 5 6 7 8
test = [[0,0,3,0,2,0,6,0,0],#0
        [9,0,0,3,0,5,0,0,1],#1
        [0,0,1,8,0,6,4,0,0],#2
        [0,0,8,1,0,2,9,0,0],#3
        [7,0,0,0,0,0,0,0,8],#4
        [0,0,6,7,0,8,2,0,0],#5
        [0,0,2,6,0,9,5,0,0],#6
        [8,0,0,2,0,3,0,0,9],#7
        [0,0,5,0,1,0,3,0,0]]#8
    
#Returns a list of coordinates of all instances of a given number in a given array
def findBlocked(array, number):
    blocked=[]
    for x in range(0,9):
        for y in range(0,9):
            if array[y][x] == number:
                blocked.append([x,y])
                break
    return blocked

#Returns the midpoint of box containing given coordinates
def findBox(coordinate):
    box = [0,0]
    box[0] = math.ceil((coordinate[0] + 1) / 3) * 3 - 2
    box[1] = math.ceil((coordinate[1] + 1) / 3) * 3 - 2
    
    return box    
    
#Returns false if box containing given coordinate contains given number
def checkBox(array, number, coordinate):
    box = findBox(coordinate)
    for x in range(box[0] - 1, box[0] + 2):
        for y in range(box[1] - 1, box[1] + 2):
            if array[y][x] == number:
                return False
    return True


       


'''
found = False;
while found == False:
    xBlock = []
    yBlock = []
    for i in range(1,10):
'''      