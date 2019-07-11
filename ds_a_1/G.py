arr = [1,1,1,1,1,1,1,1,5,1,1,1]

a = arr[:4]
b = arr[4:8]
c = arr[8:12]



print(a, b, c)
if a == b:
  if a[:3] == c[:3]:
    print("fake coin is ", c[-1])
  elif a[:3] < c[:3]:
    if c[0] == c[1]:
      print("fake coin is ", c[2])
    elif a[-1] == c[0]:
      print("fake coin is ", c[1])
    else:
      print("fake coin is ", c[0])

