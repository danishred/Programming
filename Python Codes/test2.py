
n = int(input("Value of n\n"))
m = int(input("Value of m\n"))

print(type(m))


def grid_paths(n, m):

    if n == 1 or m == 1:
        return 1
    else:
        return grid_paths(n, m - 1) + grid_paths(n - 1, m)


result = grid_paths(n, m)
print(result)