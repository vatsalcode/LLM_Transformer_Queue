from __future__ import print_function
from collections import defaultdict 
  
class Graph: 
  
    def __init__(self): 
  
        self.graph = defaultdict(list) 
  
    def addEdge(self,u,v): 
        self.graph[u].append(v) 
  
    def DFSUtil(self, v, visited): 
  
        visited[v]= True
        print(v, end=" ") 
  
        for i in self.graph[v]: 
            if visited[i] == False: 
                self.DFSUtil(i, visited) 
  
  
    def DFS(self): 
        V = len(self.graph)  
        visited =[False]*(V) 
  
        for i in range(V): 
            if visited[i] == False: 
                self.DFSUtil(i, visited) 
