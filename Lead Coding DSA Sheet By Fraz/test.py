f = "a.txt"
file = open(f, "r")
a = []
b = {}
for i in file:
    for j in range(0, len(i)):
        a.append(i[j])

for i in a:
    if i in b:
        b[i] += 1
    else:
        b[i] = 1
print(b)
c = f.split(".")
if c[1] == "txt":
    print("\n\nit is a text file")
elif c[1] == "py":
    print("\n\nit is a python file")
else:
    print("\n\nit is a c file")
