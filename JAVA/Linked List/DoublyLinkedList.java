class Nod{

    int data;
    Nod prev;
    Nod next;

    Nod(int value)
    {
        this.data=value;
    }

}





public class DoublyLinkedList {

    public static void main(String[] args) {

        Nod n1=new Nod(10);
        Nod n2=new Nod(20);
        Nod n3=new Nod(30);

        Nod head=n1;

        n1.next=n2;
        n1.prev=null;

        n2.next=n3;
        n2.prev=n1;

        n3.next=null;
        n3.prev=n2;

        Traverse(head);


        // insert from the start

        Nod NewData=new Nod(100);
        NewData.next=head;
        NewData.prev=null;
        head=NewData;
        Traverse(head);


        // insert from any position;
        int position=2;
        Nod NewData2 = new Nod(500);

        Nod tempStore=head;

        for(int i=0;i<position;i++)
        {
            tempStore=tempStore.next;
        }

        NewData2.prev=tempStore.prev;
        NewData2.next=tempStore;
        tempStore.prev.next=NewData2;
        tempStore.prev=NewData2;


        Traverse(head);


        //Insert from the start


        Nod Value=new Nod(1000);

        Value.prev=null;
        Value.next=head;
        head=Value;
        Value.next.prev=Value;
        Traverse(head);


        //Insert from the last

        Nod Value2=new Nod(2000);
        Nod tempStore2=head;

       while(tempStore2.next!=null)
        {
            tempStore2=tempStore2.next;
        }


        Value2.prev=tempStore2;
        Value2.next=null;
        tempStore2.next=Value2;


        Traverse(head);


        // Delete from the start

        //Nod storeTemp=head;
        head.next.prev=null;
        head=head.next;
        Traverse(head);

        //Delete from the last

        Nod tempStore3=head;

        while(tempStore3.next!=null)
        {
            tempStore3=tempStore3.next;
        }


        //tempStore3.prev.next=null; or
        tempStore3.prev.next=tempStore3.prev.next.next;
        Traverse(head);



        //Delete from any position

        int pos=2;
        Nod tempStores=head;

        for(int i=0;i<position;i++)
        {
            tempStores=tempStores.next;
        }

        tempStores.prev.next=tempStores.prev.next.next;
        tempStores.next.prev=  tempStores.next.prev.prev;

         Traverse(head);



    }

    public static void Traverse(Nod head)
    {
        Nod cur=head;
        while(cur!=null)
        {
            System.out.print(cur.data+" ");
            cur=cur.next;
        }
        System.out.println();


        //Reverse a linked list
//        Nod cur=head;
//        while(cur.next!=null)
//        {
//            //System.out.print(cur.data+" ");
//            cur=cur.next;
//        }
        //System.out.println();


//        Nod tail=cur;
//        while(tail!=null)
//        {
//            System.out.print(tail.data+" ");
//            tail=tail.prev;
//        }
//        System.out.println();



    }


}
