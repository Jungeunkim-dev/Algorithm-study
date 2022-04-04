# 이것이 코딩 테스트다 197페이지

import sys

n=int(sys.stdin.readline().rstrip())
valid = list(map(int, input().split()))
valid.sort()

m=int(sys.stdin.readline().rstrip())
need = list(map(int,input().split()))

def binary(array, start, end, target):

    while start<=end:
        mid = (start+end)//2

        if array[mid]==target:
            return mid
        elif array[mid]<target:
            return binary(array, mid+1, end, target)
        else:
            return binary(array, start, mid-1, target)
    return None

for item_need in need:

    if binary(valid, 0, n-1, item_need)==None:
        print("no", end=' ')
    else:
        print("yes", end=' ')
