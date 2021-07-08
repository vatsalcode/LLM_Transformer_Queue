class pattern_sec {
    public static void main(int n)
    {
    int i,j,k;
    System.out.println("No. of Rows ="+n);
    for(i=1;i<=n;i++)

    {
        for (j = i; j <= 2 * i - 1; j++) {
            System.out.print(+j);

        }
        for (k = 2 * i - 2; k >= i; k--) {
            System.out.print(+k);
        }
        System.out.println();
    }
}

}
//Input 5 and you will see the desired pattern
