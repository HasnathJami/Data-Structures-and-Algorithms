class Node{
    int data;
    Node next;

    Node(int data)
    {
        this.data=data;
    }

}


public class LinkedListCreateInsertDelete {


    public static void main(String Args[])
    {
        /////Node creation
        Node n1=new Node(10);
        Node n2=new Node(20);
        Node n3=new Node(30);
        //NodeClass n4=new NodeClass(40);

        //////Create the reference/pointer of the node and then create the linked list
        Node head=n1;
        n1.next=n2;
        n2.next=n3;
        n3.next=null;

        //////Traversal of the linked list
//        Node cur=head;
//        while(cur!=null)
//        {
//            System.out.print(cur.data+" ");
//            cur=cur.next;
//
//        }
//        System.out.println();
        traversal(head);  //data 10 20 30

        ////Insertion of data
        Node newData=new Node(50); // Node creation with data. Data is in the random place of e memory.

        /////////Data insert in the first position;
        int position=2;
        if(position==0)
        {
            newData.next=head;
            head= newData;
        }
        traversal(head);

        ////////Data insert in any position;
        //First of all, we have to find the previous reference of the place where we want to store data
        Node newData2=new Node(60); // Node creation with data. Data is in the random place of e memory.
        Node prev=head;
        for(int i=0;i<position-1;i++)
        {
            prev=prev.next; // previous positions next contains the contains the reference of the position of node where we want to store data
        }
        //now prev points the data of position-1

        //Node n =prev.next;
        //prev.next=newData;
        //newData.next=n;
        //OR

        newData.next=prev.next;
        prev.next=newData;

        traversal(head); // data 10 20 50 30

        //data insert in the last position
        Node newData3=new Node(60);
        position=4;

        if(position==4)
        {
            Node beforeLast=head;
            for(int i=0;i<position-1;i++)
            {
                beforeLast=beforeLast.next;
            }


            //beforeLast.next=newData3;
            //newData3.next=null;
            //OR
            newData3.next=null;
            beforeLast.next=newData3;
            traversal(head);

        }


        ///////////Delete and element from a link list
        //Delete the first element;
        position=1;
        Node dSt=head;
        if(position==0)
        {
            dSt=dSt.next;
        }
        traversal(dSt);

        //Delete in any position
        Node dSt2=head;

        for(int i=0;i<position-1;i++)
        {
            dSt2=dSt2.next;
        }

        dSt2.next=dSt2.next.next;
        traversal(head);

        //Delete element of the last position (not mandatory but optional

        position=3;
        Node dSt3=head;
        for(int i=0;i<position-1;i++)
        {
            dSt3=dSt3.next;
        }
        dSt3.next=null;
        traversal(head);



















    }

    public static void traversal(Node head)
    {
        //Traversal of the linked list
        Node cur2=head;
        while(cur2!=null)
        {
            System.out.print(cur2.data+" ");
            cur2=cur2.next;

        }
        System.out.println();
    }



}


