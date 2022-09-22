MAX_ITER = 80

def mandelbrot(c):
    z = 0
    n = 0
    while abs(z) <= 2 and n < MAX_ITER:
        z = z*z + c
        n += 1
    return n

if __name__ == "__main__":
    for a in range(0, 4):
        for b in range(0, 4):
            c = complex(a / 4, b / 4)
            print(c, mandelbrot(c))
