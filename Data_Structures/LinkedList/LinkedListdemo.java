import java.util.LinkedList;

class LinkedListdemo{
    public static void main(String[] args){
        LinkedList ll = new LinkedList<>();
        ll.add(1);
        ll.add(2);
        ll.add("harish");
        ll.add(20.5);
        for(int i=0;i<ll.size();i++){
            System.out.println(ll.get(i));
        }
    }
}