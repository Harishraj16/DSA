class Solution
{
    //Function to count nodes of a linked list.
    public static int getCount(Node head)
    {
        int count = 0;
        Node temp = head;
        while(temp!=null){
            count++;
            temp = temp.next;
        }
        return count;
    }
}
