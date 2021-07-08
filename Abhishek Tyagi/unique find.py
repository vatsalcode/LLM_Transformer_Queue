class Union_find:
    def __init__ (self, n):
        self.ar = [None] * n
        for i in range(n):
            self.ar[i] = i
        self.size = [1] * n
        self.n = n

    def root (self, x):
        while self.ar[x] != x:
            self.ar[x] = self.ar[self.ar[x]]
            x = self.ar[x]
        return x

    def union (self, a, b):
        print("Union", a, "and", b)
        roa = self.root(a)
        rob = self.root(b)
        if self.size[roa] < self.size[rob]:
            self.ar[roa] = self.ar[rob]
            self.size[rob] += self.size[roa]
        else:
            self.ar[rob] = self.ar[roa]
            self.size[roa] += self.size[rob]

    def find (self, a, b):
        
        if self.root (a) == self.root (b):
            return True
        else:
            return False

    pass

if __name__ == "__main__":
    uf = Union_find (6)
    uf.union (1, 2)
    print("2 and 3 connected?", uf.find(2, 3))
    uf.union (1, 3)
    uf.union (4, 5)
    print("2 and 4 connected?", uf.find(2, 4))
    uf.union (3, 5)
    print("2 and 4 connected?", uf.find(2, 4))

