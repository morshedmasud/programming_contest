a = input()
while(a):
  b = input()
  res = ''
  t = False
  for i in a:
    t = False
    if i in b:
      t = True

    if t:
      if i not in res:
        res = res + i

  print("".join(sorted(res)))
  a = input()