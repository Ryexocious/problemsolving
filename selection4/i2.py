import math

def solve():
    n, m, k = map(int, input().split())
    no= n
    mo = m
    if (n * m) == k:
        print(0)
        return
    
    res = 0
    res1 = 1e9

    if k == max(n, m):
        q = max(n, m)
        res1 = q ** 2
        
    if k ==1 or k == no*mo-1:
        l = min(n,m)
        if n==1 or m==1:
            res = l**2
        else:
            res = (l**2) + 1
        k = 0 

    while no*mo-1 > k > 0:
        l = min(n, m)
        p = math.ceil(k / l)
        
        # print(l,' ',p, "\n")
        # if (l * p) != (n * m):
        #     res += l ** 2

        n = l
        m = p
        
        # print(n,' ',m, "\n")

        if k == 1:
            # l = min(n, m)
            if l ==1: res += l**2
            else: res += l * l + 1
            break 
            
        else:
            res += l ** 2
        
        
        k = (n * m) % k
        
        # print(res,' ',k, "\n")

    print(min(res,res1))

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
