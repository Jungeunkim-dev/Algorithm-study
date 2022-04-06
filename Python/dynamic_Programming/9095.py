T = int(input())
data = [1, 2, 4]
for i in range(3, 10):
    data.append(data[i - 3] + data[i - 2] + data[i - 1])
for i in range(T):
    n = int(input())
    print(data[n - 1])
