if __name__ == '__main__':
    s = input()
    
spec = []
if s.find(" ") > 0:
    spec = s.split(" ")
    spec_list = []
    for i in range(len(spec)):
        spec_list.append(spec[i].isalnum())
    print(any(spec_list))
else:
    if s.isalnum():
        print("True")
    else:
        print("False")

s_list_alpha = []
s_list_lower = []
s_list_digit = []
s_list_upper = []

for i in range(len(s)):
    s_list_alpha.append(s[i].isalpha())
    s_list_digit.append(s[i].isdigit())
    s_list_lower.append(s[i].islower())
    s_list_upper.append(s[i].isupper())

print(any(s_list_alpha))
print(any(s_list_digit))
print(any(s_list_lower))
print(any(s_list_upper))
