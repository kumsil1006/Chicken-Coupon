
try:
    while 1:
        n, k = map(int, input().split())
        max = n
        while n >= k:
            r = n % k
            max += int(n/k)
            n = int(n/k) + r
        print(max)
except:exit()
