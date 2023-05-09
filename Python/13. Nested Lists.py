if __name__ == '__main__':
    
    list = []
    for i in range(int(input())):
        name = input()
        score = float(input())
        list.append([name,score])
       
    x=101
    y=101
    
    for i in range(len(list)):
        if x > float(list[i][1]):
            x = float(list[i][1])
    
    for i in range(len(list)):
        if (x < float(list[i][1]) and y > float(list[i][1])):
            y = float(list[i][1])
    
    out = []
    
    for i in range(len(list)):
        if list[i][1]== float(y):
            out.append(list[i][0])
    
    out.sort()
    
    for i in range(len(out)):
        print(out[i])
