#============================================================================
# problem-link: https://codeforces.com/problemset/problem/231/A
# status: accepted
#============================================================================
n = int(input())
p = 0
for i in range(n):
    if input().count("1") > 1:
        p += 1
print(p)