def swap_case(s):
    res = ''
    for char in s:
        if (char.upper()!= char):
            res += char.upper()
        elif (char.lower()!=char):
            res += char.lower()
        else:
            res += char
    return res

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)