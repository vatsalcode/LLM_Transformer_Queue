using System;

class Demo {

   static void Main(String[] args) {
      for(int i=1;i<=100;i++) {

         if((i%3 == 0) && (i%5==0))
         Console.WriteLine("FizzBuzz\n");
         else if(i%3 == 0)
         Console.WriteLine("Fizz\n");
         else if(i%5 == 0)
         Console.WriteLine("Buzz\n");
         else
         Console.WriteLine(i);
      }
   }
}
