n = int(input())
an = []
i = 2
for a in range(n):
    if n % i == 0:
        an.append(i)
        n /= i
    else:
        i += 1
for i in an:
    print(i)