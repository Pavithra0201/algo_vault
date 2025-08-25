class Solution {
    public int[] countBits(int n) {
       
    int[] arr = new int[n + 1]; // size n+1 to include 'n'

    for (int i = 0; i <= n; i++) {
        int num = i;
        int count = 0;

        while (num > 0) {
            count += (num & 1); // check last bit
            num >>= 1;          // shift right
        }

        arr[i] = count; // store set-bit count for i
    }

    return arr;
}

    
}