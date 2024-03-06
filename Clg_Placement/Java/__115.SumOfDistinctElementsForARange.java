class Solution
{
    long sumOfDistinct(long arr[], int N)
    {
        Set<Long> st = new HashSet<>();
        for(long num: arr){
            st.add(num);
        }
        long result = 0;
        for(long element: st){
            result += element;
        }
        return result;
    }
}

import java.util.stream.Collectors;
class Solution
{
    long sumOfDistinct(long arr[], int N)
    {
        Set<Long> st = Arrays.stream(arr).boxed().collect(Collectors.toSet());
        long result = 0;
        for(long element: st){
            result += element;
        }
        return result;
    }
}
