import math

def solve():
    n, m, k = map(int, input().split())
    
    if (n * m) == k:
        print(0)
        return
    
    res = 0
    res1 = 1e9

    if k == max(n, m):
        q = max(n, m)
        res1 = q ** 2

    while k > 0:
        l = min(n, m)
        p = math.ceil(k / l)
        
        if (l * p) != (n * m):
            res += l ** 2

        n = l
        m = p

        if k == 1:
            l = min(n, m)
            res += l * l

        k = (n * m) % k

    print(res)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
