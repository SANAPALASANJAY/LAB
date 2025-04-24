def generate_magic_square(n):
    if n % 2 == 1:
        return generate_odd_magic_square(n)
    elif n % 4 == 0:
        return generate_doubly_even_magic_square(n)
    else:
        return generate_singly_even_magic_square(n)

def generate_odd_magic_square(n):
    magic_square = [[0] * n for _ in range(n)]
    i, j = 0, n // 2
    for num in range(1, n * n + 1):
        magic_square[i][j] = num
        i_new, j_new = (i - 1) % n, (j + 1) % n
        if magic_square[i_new][j_new]:
            i += 1
        else:
            i, j = i_new, j_new
    return magic_square

def generate_doubly_even_magic_square(n):
    magic_square = [[(n * i) + j + 1 for j in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            if (i % 4 == j % 4) or (i % 4 + j % 4 == 3):
                magic_square[i][j] = n * n + 1 - magic_square[i][j]
    return magic_square

def generate_singly_even_magic_square(n):
    half_n = n // 2
    sub_square_size = half_n
    sub_square = generate_odd_magic_square(sub_square_size)
    
    magic_square = [[0] * n for _ in range(n)]
    add = [0, 2 * sub_square_size ** 2, 3 * sub_square_size ** 2, sub_square_size ** 2]
    
    for i in range(sub_square_size):
        for j in range(sub_square_size):
            magic_square[i][j] = sub_square[i][j] + add[0]
            magic_square[i][j + sub_square_size] = sub_square[i][j] + add[1]
            magic_square[i + sub_square_size][j] = sub_square[i][j] + add[2]
            magic_square[i + sub_square_size][j + sub_square_size] = sub_square[i][j] + add[3]

    k = (n - 2) // 4
    for i in range(n):
        for j in range(n):
            if (i < sub_square_size and j < k) or (i >= sub_square_size and j >= n - k):
                if not (i == k and j == 0):
                    magic_square[i][j], magic_square[i + sub_square_size][j] = magic_square[i + sub_square_size][j], magic_square[i][j]

    for i in range(sub_square_size):
        for j in range(n - k, n):
            magic_square[i][j], magic_square[i + sub_square_size][j] = magic_square[i + sub_square_size][j], magic_square[i][j]

    return magic_square

def print_magic_square(square):
    n = len(square)
    print(f"\nMagic Square of order {n}:\n")
    for row in square:
        print(" ".join(f"{num:3}" for num in row))
    print(f"\nMagic Constant = {n * (n * n + 1) // 2}")

n = int(input("Enter the size of magic Square: "))

ans = generate_magic_square(n)
print_magic_square(ans)
