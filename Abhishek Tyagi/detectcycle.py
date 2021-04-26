
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

    def checkCyclic(self):
        visited = [False] * len(self.vertex)
        stack = [False] * len(self.vertex)
        for vertex in range(len(self.vertex)):
            if visited[vertex] == False:
                if self.checkCyclicRec(visited, stack, vertex) == True:
                    return True
        return False

    def checkCyclicRec(self, visited, stack, vertex):
        visited[vertex] = True
        stack[vertex] = True

        for adjacentNode in self.vertex[vertex]:
            if visited[adjacentNode] == False:
                if self.checkCyclicRec(visited, stack, adjacentNode) == True:
                    return True
            elif stack[adjacentNode] == True:
                return True

        stack[vertex] = False
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
