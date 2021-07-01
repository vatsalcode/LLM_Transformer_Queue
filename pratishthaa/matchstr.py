colorsa = ["green", "orange", "black", "white"]
colorsb = ["green", "green", "green", "green"]

print(all(c == 'blue' for c in colorsa))
print(all(c == 'green' for c in colorsb))
