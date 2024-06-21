// Median of 2 Sorted Arrays of Different Sizes
// https://www.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


static double medianOfArrays(int n, int m, int a[], int b[]) 
    {
        int totalLength = n + m;
        int i = 0, j = 0;
        int count = 0;
        int prev = 0, curr = 0;

        while (count <= totalLength / 2) {
            prev = curr;
            if (i < n && (j >= m || a[i] <= b[j])) {
                curr = a[i];
                i++;
            } else {
                curr = b[j];
                j++;
            }
            count++;
        }

        if (totalLength % 2 == 0) {
            return (prev + curr) / 2.0;
        } else {
            return curr;
        }
    }
