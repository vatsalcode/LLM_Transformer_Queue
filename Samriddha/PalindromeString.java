public class PalindromeString    
{    
    public static void main(String[] args) {    
        String string = "Madam";    
        boolean flag = true;              
        string = string.toLowerCase();   
        for(int i = 0; i < string.length()/2; i++){    
            if(string.charAt(i) != string.charAt(string.length()-i-1)){    
                flag = false;    
                break;    
            }    
        }    
        if(flag)    
            System.out.println("Given string is palindrome");    
        else    
            System.out.println("Given string is not a palindrome");    
    }    
}    
