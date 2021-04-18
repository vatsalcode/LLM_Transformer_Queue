static long arrayManipulation(int n, int[][] queries) {
        long arr[] = new long[n];
        for (int i= 0; i< queries.length; i++){
            int f=queries[i][0]-1;
            int g=queries[i][1]-1;
            for (int j= f; j<= g; j++){
                arr[j]=arr[j]+queries[i][2];
            }
        }
        long max = arr[0];
         for (int i = 1; i < arr.length; i++)
             if (arr[i] > max)
                 max = arr[i];
        return max;
    }
