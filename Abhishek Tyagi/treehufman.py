import queue
def decodeHuff(root, s):
    current = root
    result = []

    for char in s:
        if char is '1':
            current = current.right
        else:
            current = current.left
        if current.left is None and current.right is None:
            result.append(current.data)
            current = root
    print(''.join(result))
    return ''.join(result)

