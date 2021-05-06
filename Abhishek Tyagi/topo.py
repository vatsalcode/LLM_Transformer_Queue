from collections import defaultdict


def topological_sort(graph: dict) -> list:
    leading_in = defaultdict(lambda: 0)

    for key, values in graph.items():
        if key not in leading_in.keys():
            leading_in[key] = 0
        for node in values:
            leading_in[node] += 1

    queue = []
    output = []

    for node, degree in leading_in.items():
        if degree == 0:
            queue.append(node)
            output.append(node)

    while queue:
        node = queue.pop(0)
        for destination in graph.get(node, []):
            leading_in[destination] -= 1
            if leading_in[destination] == 0:
                queue.append(destination)
                output.append(destination)

    return output
