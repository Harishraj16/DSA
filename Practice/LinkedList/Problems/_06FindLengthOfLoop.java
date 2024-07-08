

/*

class Node
{
    int data;
    Node next;
    Node(int d) {data = d; next = null; }
}

*/

//Function should return the length of the loop in LL.

class Solution
{
    //Function to find the length of a loop in the linked list.
    static int countNodesinLoop(Node head)
    {
        HashMap<Node,Integer> mp = new HashMap<>();
        Node temp = head;
        int count = 0;
        while(temp!=null){
            if(mp.containsKey(temp)){
                return count-mp.get(temp);
            }
            mp.put(temp,count);
            count++;
            temp = temp.next;
        }
        return 0;
    }
}
