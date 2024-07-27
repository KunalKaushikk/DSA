public class Solution {
    public int makeEqual(int n, int k) {
        // Count the number of 1-bits in both n and k
        int countN = Integer.bitCount(n);
        int countK = Integer.bitCount(k);
        
        // If k has more 1-bits than n, it's impossible
        if (countK > countN) {
            return -1;
        }
        
        // Calculate the number of changes needed
        int changes = 0;
        
        // Check each bit from the least significant bit to the most significant bit
        while (n > 0 || k > 0) {
            int bitN = n & 1;
            int bitK = k & 1;
            
            if (bitK == 1 && bitN == 0) {
                // If k has a 1-bit where n has a 0-bit, it's impossible
                return -1;
            } else if (bitN == 1 && bitK == 0) {
                // If n has a 1-bit where k has a 0-bit, we need to change this bit
                changes++;
            }
            
            // Shift both n and k to the right by 1 bit
            n >>= 1;
            k >>= 1;
        }
        
        return changes;
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        
        // Example 1
        int n1 = 13, k1 = 4;
        System.out.println(sol.makeEqual(n1, k1)); // Output: 2
        
        // Example 2
        int n2 = 21, k2 = 21;
        System.out.println(sol.makeEqual(n2, k2)); // Output: 0
        
        // Example 3
        int n3 = 14, k3 = 13;
        System.out.println(sol.makeEqual(n3, k3)); // Output: -1
    }
}
