class Graph():
    def __init__(self):
        self.vertex = {}

    def printGraph(self):
        for i in self.vertex.keys():
            print(i,' -> ', ' -> '.join([str(j) for j in self.vertex[i]]))

    def addEdge(self, fromVertex, toVertex):
        if fromVertex in self.vertex.keys() and toVertex in self.vertex.keys():
            self.vertex[fromVertex].append(toVertex)
            self.vertex[toVertex].append(fromVertex)
        else:
            self.vertex[fromVertex] = [toVertex]
            self.vertex[toVertex] = [fromVertex]

    def checkCyclic(self):
        visited = [False] * len(self.vertex)          
        for vertex in range(len(self.vertex)):
            if visited[vertex] == False:
                if self.checkCyclicRec(visited, -1, vertex) == True:
                    return True
        return False

    def checkCyclicRec(self, visited, parent, vertex):
        visited[vertex] = True

        for adjacentNode in self.vertex[vertex]:
            if visited[adjacentNode] == False:
                if self.checkCyclicRec(visited, vertex, adjacentNode) == True:
                    return True
            elif parent != adjacentNode:
                return True

        return False

if __name__ == '__main__':
    graph = Graph()
    graph.addEdge(0, 1)
    graph.addEdge(0, 2)
    graph.addEdge(1, 2)
    graph.addEdge(2, 0)
    graph.addEdge(2, 3)
    graph.addEdge(3, 3)

    graph.printGraph()

    if graph.checkCyclic() == 1:
        print ("Graph has a cycle")
    else:
        print ("Graph has no cycle")

    g1 = Graph()
    g1.addEdge(0,1)
    g1.addEdge(1,2)

    g1.printGraph()

    if g1.checkCyclic() == 1:
        print ("Graph has a cycle")
    else:
        print ("Graph has no cycle")

