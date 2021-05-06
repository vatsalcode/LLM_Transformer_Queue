

class Graph():
    def __init__(self, count):
        self.vertex = {}
        self.count = count         

    def printGraph(self):
        for i in self.vertex.keys():
            print(i,' -> ', ' -> '.join([str(j) for j in self.vertex[i]]))

    def addEdge(self, fromVertex, toVertex):
        if fromVertex in self.vertex.keys():
            self.vertex[fromVertex].append(toVertex)
        else:
            self.vertex[fromVertex] = [toVertex]
            self.vertex[toVertex] = []

    def topologicalSort(self):
        visited = [False] * self.count           
        stack = []                               
        for vertex in range(self.count):
            if visited[vertex] == False:
                self.topologicalSortRec(vertex, visited, stack)

        print(' '.join([str(i) for i in stack]))

    def topologicalSortRec(self, vertex, visited, stack):

        visited[vertex] = True

        try:
            for adjacentNode in self.vertex[vertex]:
                if visited[adjacentNode] == False:
                    self.topologicalSortRec(adjacentNode, visited, stack)
        except KeyError:
            return

        stack.insert(0,vertex)

if __name__ == '__main__':
    g= Graph(6)
    g.addEdge(5, 2)
    g.addEdge(5, 0)
    g.addEdge(4, 0)
    g.addEdge(4, 1)
    g.addEdge(2, 3)
    g.addEdge(3, 1)
    g.topologicalSort()

