import java.util.Scanner;
class LLNode{

    int data;
    LLNode next;

    LLNode(int data)
    {
        this.data=data;
        next=null;
    }

}



public class SinglyLinkedListClear {




    public static void main(String[] args) {

        Scanner inp=new Scanner(System.in);
        //int t=inp.nextInt();


       // while(t-->0)
       // {
            int n=inp.nextInt();
            LLNode head=new LLNode(inp.nextInt());
            LLNode tail=head;

            for(int i=0;i<n-1;i++)
            {
                tail.next=new LLNode(inp.nextInt());
                tail=tail.next;
            }
            tail.next=null;

            printList(head);
       // }





    }

    public static void printList(LLNode head)
    {
        LLNode curr=head;

        while(curr!=null)
        {
            System.out.print(curr.data+" ");
            curr=curr.next;
        }
        System.out.println();
    }

}
