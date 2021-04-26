
class Graph():
    def __init__(self):
        self.vertex = {}

    def printGraph(self):
        print(self.vertex)
        for i in self.vertex.keys():
            print(i,' -> ', ' -> '.join([str(j) for j in self.vertex[i]]))

    def addEdge(self, fromVertex, toVertex):
        if fromVertex in self.vertex.keys():
            self.vertex[fromVertex].append(toVertex)
        else:
            self.vertex[fromVertex] = [toVertex]

    def DFS(self):
        visited = [False] * len(self.vertex)

        # call the recursive helper function
        for i in range(len(self.vertex)):
            if visited[i] == False:
                self.DFSRec(i, visited)

    def DFSRec(self, startVertex, visited):
        visited[startVertex] = True

        print(startVertex, end = ' ')

        for i in self.vertex.keys():
            if visited[i] == False:
                self.DFSRec(i, visited)

if __name__ == '__main__':
    g = Graph()
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(1, 2)
    g.addEdge(2, 0)
    g.addEdge(2, 3)
    g.addEdge(3, 3)

    g.printGraph()
    print('DFS:')
    g.DFS()

