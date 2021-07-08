class Sample:
    def __init__(self, data_description, node_id, parent_id=""):
        self.data_description = data_description
        self.node_id = node_id
        self.parent_id = parent_id


class Node:
    def __init__(self, data):
        self.data = Sample(data['data_description'], data['node_id'], data['parent_id'])
        self.children = []


class Tree:
    def __init__(self, data):
        self.Root = data

    def insert_child(self, root, new_node):


        if root.data.node_id == new_node.data.parent_id:
            root.children.append(new_node)


        elif len(root.children) > 0:
            for each_child in root.children:
                self.insert_child(each_child, new_node)

    def print_tree(self, root, point):
        print(point, root.data.node_id, root.data.parent_id, root.data.data_description)
        if len(root.children) > 0:
            point += "_"
            for each_child in root.children:
                self.print_tree(each_child, point)


data = {'data_description': 'Sample_root_1', 'node_id': '1', 'parent_id': ''}
data1 = {'data_description': 'Sample_root_2', 'node_id': '2', 'parent_id': '1'}
data2 = {'data_description': 'Sample_root_3', 'node_id': '3', 'parent_id': '1'}
data3 = {'data_description': 'Sample_root_4', 'node_id': '4', 'parent_id': '2'}
data4 = {'data_description': 'Sample_root_5', 'node_id': '5', 'parent_id': '3'}
data5 = {'data_description': 'Sample_root_6', 'node_id': '6', 'parent_id': '4'}
data6 = {'data_description': 'Sample_root_7', 'node_id': '7', 'parent_id': '4'}

a = Tree(Node(data))
a.insert_child(a.Root, Node(data1))
a.insert_child(a.Root, Node(data2))
a.insert_child(a.Root, Node(data3))
a.insert_child(a.Root, Node(data4))
a.insert_child(a.Root, Node(data5))
a.insert_child(a.Root, Node(data6))
a.print_tree(a.Root, "|_")

