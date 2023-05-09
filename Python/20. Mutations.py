def mutate_string(string, position, character):
    s = list(string)
    for i in range(len(s)):
        if(i==position):
            s[i]=character
    string=('').join(s)
    return string

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)