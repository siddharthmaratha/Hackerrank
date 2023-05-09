n, m = map(int, input().split())

for i in range(1, n, 2):
    lno = (m-(i*3))//2
    print("-"*lno + ".|."*i + "-"*lno)

cen = (m-7)//2
print("-"*cen + "WELCOME" + "-"*cen)

for j in range(n-2, 0, -2):
    lno = (m-(j*3))//2
    print("-"*lno + ".|."*j + "-"*lno)