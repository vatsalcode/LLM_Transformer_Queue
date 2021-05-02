
from collections import defaultdict
r = range


class Graph:
    def __init__(self, vertices):

        self.vertices = vertices
        self.graph = []

    def add_edge(self, start, end, weight):
        value = [start, end, weight]
        self.graph.append(value)

    def search(self, parent_ranks, index):
        if parent_ranks[index] != index:
            return self.search(parent_ranks, parent_ranks[index])
        return index

    def union(self, ranks, parent_ranks, fir, sec):
        fir, sec = self.search(parent_ranks, fir), self.search(
            parent_ranks, sec)


        if (ranks[fir] > ranks[sec]):
            parent_ranks[sec] = fir

        elif (ranks[fir] < ranks[sec]):
            parent_ranks[fir] = sec

        elif (ranks[fir] == ranks[sec]):
            parent_ranks[sec] = fir
            ranks[fir] += 1


    def run_mst(self, ranks, parent_ranks, answer):
        edge, index = 0, 0

        while True:
            if ((self.vertices - 1) <= edge):
                break

            value = self.graph[index]

            fir, sec = self.search(parent_ranks, value[0]), self.search(
                parent_ranks, value[1])

            if fir != sec:
                edge += 1   

                answer.append(value)
                self.union(ranks, parent_ranks, fir, sec)

            index += 1

    def print_graph(self, answer):
        for start, end, weight in answer:
            print(f"{start} - {end} --> {weight}")

    def MST(self):
        self.graph = sorted(self.graph, key=lambda item: item[2])

        ranks = [0] * self.vertices
        parent_ranks = [_ for _ in r(self.vertices)]
        answer = []

        self.run_mst(ranks, parent_ranks, answer)
        self.print_graph(answer)
