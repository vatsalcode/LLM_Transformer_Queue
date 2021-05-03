
def printShortestPath(n, i_start, j_start, i_end, j_end):
    
    visited = [[0 for _ in range(n)] for _ in range(n)]
   
    queue = [[i_start, j_start, 0, []]]
    while queue:
        i_cur, j_cur, step, path = queue.pop(0)
        if visited[i_cur][j_cur] == 0:
            current = [i_cur, j_cur]
            visited[i_cur][j_cur] = 1

            
            if i_end < i_cur:
                if j_end == j_start:
                    possible = [[-2, -1, 'UL'],[-2, 1, 'UR']]
                else:
                    possible = [[-2, 1,'UR'], [0, 2,'R'], [-2, -1,'UL'], [0, -2,'L']]
          
            elif i_end > i_cur:
                if j_end == j_start:
                    possible = [[2, 1, "LR"], [2, -1, 'LL']]
                else:
                    possible =  [[0, 2, 'R'],[2, 1, "LR"], [2, -1, 'LL'], [0,-2, 'L']]
            
            else:
                if j_end < j_start:
                    possible = [[0, -2, 'L']]
                else:
                    possible = [[0, 2, 'R']]

          
            if current[0] == i_end and current[1] == j_end:
                print(step)
                [print(each, end = ' ') for each in path]
                return 0

            moves = [[current[0]+move_i, current[1]+move_j, step+1, path+[new_path]] for move_i, move_j, new_path in possible 
            if current[0]+move_i <n and current[0]+move_i >=0 and
            current[1]+move_j <n and current[1]+move_j >=0 and
            visited[current[0]+move_i][current[1]+move_j]==0]
            #print(moves)
            queue.extend(moves)
        else:
                pass
    
    print('Impossible')
    

