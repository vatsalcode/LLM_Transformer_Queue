import java.io.*;
import java.util.*;
public class Main {

    public static void main(String[] args)throws IOException {
        // write your code here
        Main m=new Main();
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=0;
        try{
            t=Integer.parseInt(br.readLine());
        }
        catch(NumberFormatException e){
            t=0;
        }
        if(t>Math.pow(10,5)||t<=0)
            t=0;
        String[] out=new String[t];
        for(int i=0;i<t;i++){
            String s=br.readLine();
            StringTokenizer st=new StringTokenizer(s," ");
           int N=Integer.parseInt(st.nextToken());
           if(N<2||N>Math.pow(10,9))
               N=0;
           int k=Integer.parseInt(st.nextToken());
            if(k<2||k>Math.pow(10,9))
                k=0;
           int x=Integer.parseInt(st.nextToken());
           int y=Integer.parseInt(st.nextToken());
           out[i]=m.getCoordinate(N,k,x,y)[0]+" "+m.getCoordinate(N,k,x,y)[1];

        }
        for(int i=0;i<t;i++){
            System.out.println(out[i]);
        }
    }
    private int[] getCoordinate(int N,int K,int x,int y){
        int tx,ty;
        if(x==y){
            return new int[] {N,N};
        }
        else{
            if(x>y){
                for(int i=0;i<K;i++){
                    tx=getNext(true,x,y,N)[0];
                    ty=getNext(true,x,y,N)[1];
                    x=tx;
                    y=ty;
                }

            }
            else{
                for(int i=0;i<K;i++){
                    tx=getNext(false,x,y,N)[0];
                    ty=getNext(false,x,y,N)[1];
                    x=tx;
                    y=ty;

                }
            }
            return new int[] {x,y};
        }
    }
    private int[] getNext(boolean r,int x,int y,int N)
    {
        int[] co=new int[2];
        if(x!=0&&x!=N&&y!=0&&y!=N){
            if(r){
                while(x!=N){
                    x+=1;
                    y+=1;
                }
                co[0]=x;
                co[1]=y;
                return co;
            }
            else{
                while(y!=N){
                    x+=1;
                    y+=1;
                }
                co[0]=x;
                co[1]=y;
                return co;
            }
        }
        else{
            if(x==N){
                if(r){
                    int t=x;
                    x=y;
                    y=t;
                }
                else{
                    while(y!=0){
                        x-=1;
                        y-=1;
                    }
                }
                co[0]=x;
                co[1]=y;
                return co;
            }
            else if(y==N){
                if(r){
                    y-=x;
                    x=0;
                }
                else{
                    int t=x;
                    x=y;
                    y=t;
                }
                co[0]=x;
                co[1]=y;
                return co;
            }
            else if(x==0){
                if(r){
                    x=y;
                    y=0;
                }
                else{
                    x=N-y;
                    y=N;
                }
                co[0]=x;
                co[1]=y;
                return co;
            }
            else if(y==0){
                if(r){
                    y=N-x;
                    x=N;
                }
                else{
                    y=x;
                    x=0;
                }
                co[0]=x;
                co[1]=y;
                return co;
            }
        }
        return co;
    }
}



