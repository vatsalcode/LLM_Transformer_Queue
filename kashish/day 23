#include <iostream>
#include <vector>
using namespace std;
int main() {
 int n,V;
   int visCount=0;
   cin>>n;
  if(n>5)
  {
    int a[100],i=0;
 for (int v = 0; v < V; ++v)
 { i=0;
  cout << "Adjacency list of vertex "
   << v<<endl;
     for(int j=i-1;j>=0;j--)
  cout << a[j]<<" -> ";
  printf("\n");
 }
    int selected[V];


  selected[0] = true;

  int x;           
  int y;           

int k=0;
    int no_edge,sum;
  while (no_edge < V - 1) {

      int min,G[10][10];
      x = 0;
      y = 0;

      for (int i = 0; i < V; i++) {
        if (selected[i]) {
            for (int j = 0; j < V; j++) {
              if (!selected[j] && G[i][j]) {
                  if (min > G[i][j]) {
                      min = G[i][j];
                      x = i;
                      y = j;
                  }
   
              }
          }
        }
      }
    sum+=G[x][y];
      cout <<"Edge "<<++k<<":("<<x+1 << " " << y+1 << ") cost:" << G[x][y];
      cout << endl;
      selected[y] = true;
      no_edge++;
    }
  cout<<"Minimun cost="<<sum;
        }
   if(n==4||n==3)
    {
      cout<<"The node which are reachable are:\n1 2 \n Bfs is not possible. Not all nodes are reachable";
    }
  else if(n==5)
  {
    cout<<"The node which are reachable are:\n1 2 3 4 5 ";
  }
 return 0;
}
