class Graph:

    def __init__(self, vertices):
        self.vertices = vertices
        self.graph = []

    def addEdge(self, fromEdge, toEdge, weight):
        self.graph.append([fromEdge, toEdge, weight])

    def find(self, parent, i):
        if parent[i] == i:
            return i
        return self.find(parent, parent[i])

    def union(self, parent, rank, first, second):
        root_x = self.find(parent, first)
        root_y = self.find(parent, second)

        if rank[root_x] < rank[root_y]:
            parent[root_x] = root_y
        elif rank[root_x] > rank[root_y]:
            parent[root_y] = root_x
        elif rank[root_x] == rank[root_y]:
            parent[root_y] = root_x
            rank[root_x] += 1

    def kruskals(self):
        result = []

        sortedIndex = 0
        resultIndex = 0

        self.graph =  sorted(self.graph,key=lambda item: item[2])

        parent = []
        rank = []

        for node in range(self.vertices):
            parent.append(node)
            rank.append(0)

        while resultIndex < self.vertices - 1:
            fromEdge, toEdge, weight = self.graph[sortedIndex]

            sortedIndex += 1
            root_x = self.find(parent, fromEdge)
            root_y = self.find(parent, toEdge)

            if root_x != root_y:
                resultIndex += 1
                result.append([fromEdge, toEdge, weight])
                self.union(parent, rank, root_x, root_y)

        print ('Constructed Kruskal\'s Minimum Spanning Tree: ')
        for u,v,weight  in result:
            print('{} -> {} = {}'.format(u, v, weight))

if __name__ == '__main__':
    g = Graph(4)
    g.addEdge(0, 1, 10)
    g.addEdge(0, 2, 6)
    g.addEdge(0, 3, 5)
    g.addEdge(1, 3, 15)
    g.addEdge(2, 3, 4)

    g.kruskals()

