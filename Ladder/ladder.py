# Summer Moreland - Ladder - Kattis

import math


def ladder():
    line = input().split()
    h = int(line[0])
    v = math.radians(int(line[1]))

    print(math.ceil(h/(math.sin(v))))


def main():
    ladder()


if __name__ == "__main__":
    main()
