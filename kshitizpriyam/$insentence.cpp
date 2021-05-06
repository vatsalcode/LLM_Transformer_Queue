int main(){

   char c;
  int cntwords=0;
   bool pehleaya=false;
  c = cin.get();
  
  while(c!='$'){
       
     if(c>=97 && c<=122 & pehleaya==false){
     cntword++;
       pehleaya = true;
     }
    if(c==32){
    pehleaya = false;
    }
    c = cin.get()
      
  return 0;
  }
}
