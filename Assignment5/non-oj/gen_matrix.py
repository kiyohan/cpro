matrix = [[j + i * 20 for j in range(1, 21)] for i in range(20)]

for row in matrix:
    print(" ".join(map(str, row)))
