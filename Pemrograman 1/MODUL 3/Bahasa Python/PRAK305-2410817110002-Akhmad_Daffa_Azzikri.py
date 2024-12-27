d1 = int(input())

h = d1 // 86400
j = (d1 % 86400) // 3600
m = (d1 % 3600) // 60
d2 = d1 % 60

if h > 0:
    print(f"{h} hari {j:02}:{m:02}:{d2:02}")
else:
    print(f"{j:02}:{m:02}:{d2:02}")