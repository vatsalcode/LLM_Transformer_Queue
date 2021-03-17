int main(){

   int a[2][2], b[2][2],i,j;
   cout<<"Enter 1st Matrix: ";
  for(i=0;i<2;i++){
      for(j=0;j<2;j++){
      cin>>a[i][j];
      }
  }
  cout<<"Enter 2nd Matrix: ";
  for(i=0;i<2;i++){
      for(j=0;j<2;j++){
      cin>>b[i][j];
      }
  }
  int c[2][2],k;
  cout<<"Product of the 2 matrices will be ";
  //Algo
  for(i=0;i<2;i++){
  for(j=0;j<2;j++){
         c[i][j]=0;
    for(k=0;k<2;k++){
    c[i][j] = c[i][j] + a[i][k]*b[k][j];
    }
  }
  }
  
  for(i=0;i<2;i++){
  for(j=0;j<2;j++){
  cout<<c[i][j];
  }
    cout<<"\n";
  }
  /*for(i=0;i<2;i++){
  for(j=0;j<2;j++){
  c[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0];
  c[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1];
  c[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0];
  c[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1];
  }
  }
  cout<<c[i][j];*/
  return 0;
}
