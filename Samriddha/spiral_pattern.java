public class spiral_pattern  
{  
    public static void main(String[] args) {  
    int lines=4;  
    int i,j,k,l;  
    int space=0;  
    for(i=0;i<lines;i++){
        for(j=1;j<=space;j++){
            System.out.print(" ");  
        }  
        for(j=1;j<=lines;j++){
            if(j<=(lines-i))  
            System.out.print(j);  
            else  
            System.out.print("*");  
        }  
        j--;  
        while(j>0){
            if(j>lines-i)  
            System.out.print("*");  
            else  
            System.out.print(j);  
            j--;  
        }  
        if((lines-i)>9)
         space=space+1;  
    System.out.println("");  
    }  
}  
