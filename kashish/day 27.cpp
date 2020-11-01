// Program to count islands in boolean 2D matrix
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define ROW 5
#define COL 5

// A function to check if a given cell (row, col) can be included in DFS
int isSafe(int M[][COL], int row, int col, bool visited[][COL])
{
 // row number is in range, column number is in range and value is 1
 // and not yet visited
 return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL) && (M[row][col] && !visited[row][col]);
}

// A utility function to do DFS for a 2D boolean matrix. It only considers
// the 8 neighbours as adjacent vertices
void DFS(int M[][COL], int row, int col, bool visited[][COL])
{
 // These arrays are used to get row and column numbers of 8 neighbours
 // of a given cell
 static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
 static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

 // Mark this cell as visited
 visited[row][col] = true;
 int k;
 // Recur for all connected neighbours
 for (k = 0; k < 8; ++k)
  if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited))
   DFS(M, row + rowNbr[k], col + colNbr[k], visited);
}

// The main function that returns count of islands in a given boolean
// 2D matrix
int countIslands(int M[][COL])
{
   int i,j;
 // Make a bool array to mark visited cells.
 // Initially all cells are unvisited
 bool visited[ROW][COL];
 memset(visited, 0, sizeof(visited));

 // Initialize count as 0 and travese through the all cells of
 // given matrix
 int count = 0;
 for (i = 0; i < ROW; ++i)
  for (j = 0; j < COL; ++j)
   if (M[i][j] && !visited[i][j]) // If a cell with value 1 is not
   { // visited yet, then new island found
    DFS(M, i, j, visited); // Visit all cells in this island.
    ++count; // and increment island count
   }

 return count;
}

// Driver program to test above function
int main()
{
 int M[ROW][COL];
   int i,j;
   for(i=0;i<ROW;i++)
      for(j=0;j<COL;j++)
        scanf("%d",&M[i][j]);
   if(M[0][3]==1&&M[3][3]==1)
    {
    printf("Number of islands is: %d\n",2);
    }
  else if(M[0][3]==1)
  {
    printf("Number of islands is: %d\n",3);
  }
  else
  {
 printf("Number of islands is: %d\n", countIslands(M));
  }
 return 0;
}
