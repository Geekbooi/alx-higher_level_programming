#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    value = 0
    if len(sys.argv) == 1:
        print(0)
    else:
        for i in range(1, len(sys.argv)):
            value = value + int(sys.argv[i])
        print(value)
