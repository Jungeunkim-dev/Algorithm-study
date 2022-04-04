import sys

n=int(sys.stdin.readline().rstrip())
data = list(map(int, input().split()))

value = list(set(data))
value.sort()


def binary_search(start, end, target, array):
    while start<=end:
        mid = (start+end)//2

        if array[mid]==target:
            return mid
        elif array[mid]>target:
            end = mid - 1
        else:
            start = mid + 1

    return None

for i in data:
    print(binary_search(0, len(value)-1, i, value), end=' ')
