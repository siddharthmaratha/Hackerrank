# Enter your code here. Read input from STDIN. Print output to STDOUT
thick = int(input())
c='H'

for i in range(thick):
    print((c*i).rjust(thick-1)+c+(c*i).ljust(thick-1))
    
for i in range(thick+1):
    print((c*thick).center(thick*2)+(c*thick).center(thick*6))
    
for i in range((thick+1)//2):
    print((c*thick*5).center(thick*6))
              
for i in range(thick+1):
    print((c*thick).center(thick*2)+(c*thick).center(thick*6))
            
for i in range(thick):
    print(((c*(thick-i-1)).rjust(thick)+c+(c*(thick-i-1)).ljust(thick)).rjust(thick*6))
