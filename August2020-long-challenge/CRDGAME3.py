import math
for _ in range(int(input())):
    chef, rick = map(int,input().split())
    chef  = math.ceil(chef/9)
    rick  = math.ceil(rick/9)
    if rick <= chef:
        print(1,rick)
    else:
        print(0,chef)
