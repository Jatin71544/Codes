def find_permutation(n, k):
    if k > (n - 1) * n // 2:
        return "No"
    
    permutation = list(range(1, n + 1))
    for i in range(n - 1):
        if k == 0:
            break
        if k >= n - i - 1:
            diff = n - i - 1
        else:
            diff = k
        permutation[i], permutation[i + diff] = permutation[i + diff], permutation[i]
        k -= diff

    return "Yes\n" + " ".join(map(str, permutation))

# Reading input
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    print(find_permutation(n, k))
