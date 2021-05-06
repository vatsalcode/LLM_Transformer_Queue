public class Swapnumbers{
    public static void main(String[] args) {
        float first=1.25f, second=2.59f;
        System.out.println("--before SWAP--");
        System.out.println("first number=" +first);
        System.out.println("second number=" +second);
        // value of first is assigned to temporary
        float temporary= first; 
        // value of second is assigned to temporary 
        first = second;
        // value of temporary(which contains the initial value of first) is assigned  to second
        second=temporary;
        System.out.println("--after SWAP--");
        System.out.println("first number=" +first);
        System.out.println("second number=" +second);
    }
}
