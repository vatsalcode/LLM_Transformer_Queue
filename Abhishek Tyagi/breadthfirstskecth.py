class Graph():
    def __init__(self):
        self.vertex = {}

    def printGraph(self):
        for i in self.vertex.keys():
            print(i,' -> ', ' -> '.join([str(j) for j in self.vertex[i]]))

    def addEdge(self, fromVertex, toVertex):
        if fromVertex in self.vertex.keys():
            self.vertex[fromVertex].append(toVertex)
        else:
            self.vertex[fromVertex] = [toVertex]

    def BFS(self, startVertex):
        visited = [False] * len(self.vertex)

        queue = []

        visited[startVertex] = True
        queue.append(startVertex)

        while queue:
            startVertex = queue.pop(0)
            print(startVertex, end = ' ')

            for i in self.vertex[startVertex]:
                if visited[i] == False:
                    queue.append(i)
                    visited[i] = True

if __name__ == '__main__':
    g = Graph()
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(1, 2)
    g.addEdge(2, 0)
    g.addEdge(2, 3)
    g.addEdge(3, 3)

    g.printGraph()
    print('BFS:')
    g.BFS(2)

