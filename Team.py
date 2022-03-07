n = int(input())
p = 0
for i in range(n):
    if input().count("1") > 1:
        p += 1
print(p)