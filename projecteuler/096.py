test = [[0,0,3,0,2,0,6,0,0],
        [9,0,0,3,0,5,0,0,1],
        [0,0,1,8,0,6,4,0,0],
        [0,0,8,1,0,2,9,0,0],
        [7,0,0,0,0,0,0,0,8],
        [0,0,6,7,0,8,2,0,0],
        [0,0,2,6,0,9,5,0,0],
        [8,0,0,2,0,3,0,0,9],
        [0,0,5,0,1,0,3,0,0]]
    
#Returns a list of coordinates of a given number in a given array
def findBlocked(array, number):
    blocked=[]
    for x in range(0,9):
        for y in range(0,9):
            if array[y][x] == number:
                blocked.append([x,y])
                break
    return blocked
   
#
def checkBox(array, number, coordinate):
    box = []

        


'''
found = False;
while found == False:
    xBlock = []
    yBlock = []
    for i in range(1,10):
'''      