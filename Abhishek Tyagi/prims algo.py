import sys

class Graph(object):
    def __init__(self, vertices):
        self.vertices = vertices                        
        self.graph = [[0 for column in range(vertices)]
                      for row in range(vertices)]       

    def getMinimumKey(self, weight, visited):
        min = 9999

        for i in range(self.vertices):
            if weight[i] < min and visited[i] == False:
                min = weight[i]
                minIndex = i

        return minIndex

    def primsAlgo(self):
        weight = [9999] * self.vertices     
        MST = [None] * self.vertices        
        weight[0] = 0                       
        visited = [False] * self.vertices
        MST[0] = -1                         

        for _ in range(self.vertices):
            minIndex = self.getMinimumKey(weight, visited)
            visited[minIndex] = True

            for vertex in range(self.vertices):
                if self.graph[minIndex][vertex] > 0 and visited[vertex] == False and \
                weight[vertex] > self.graph[minIndex][vertex]:
                    weight[vertex] = self.graph[minIndex][vertex]
                    MST[vertex] = minIndex

        self.printMST(MST)

    def printMST(self, MST):
        print ("Edge \tWeight")
        for i in range(1, self.vertices):
            print (MST[i],"-",i,"\t",self.graph[i][ MST[i] ])

if __name__ == '__main__':
    g  = Graph(6)

    g.graph = [[0, 3, 2, 5, 7, 3],
               [3, 0, 4, 8, 6, 6],
               [2, 4, 0, 7, 1, 3],
               [5, 8, 7, 0, 2, 4],
               [7, 6, 1, 2, 0, 3],
               [3, 6, 3, 4, 3, 0]]

    g.primsAlgo()
