public class Main {

  public static void main(String[] args) {

    int kite = 44, i = 2;
    boolean flag = false;
    while (i <= kite / 2) {
      // condition for nonprime number
      if (kite % i == 0) {
        flag = true;
        break;
      }

      ++i;
    }

    if (!flag)
      System.out.println(kite + " is a prime number.");
    else
      System.out.println(kite + " is not a prime number.");
  }
}
