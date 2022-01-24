def main():
    sum = 0
    result = 0
    maxResult = 0

    forward = ""
    backward = ""
    
    for i in range(999):
        for j in range(999):
            sum = i * j;

            forward = f'{sum}'
            backward = forward
            n = len(forward)
            forward[::-1]
            print(forward)

            for k in range(int(n/2)):
                print(n)

main()