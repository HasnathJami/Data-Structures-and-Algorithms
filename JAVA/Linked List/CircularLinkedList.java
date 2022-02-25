class Nodess{

    int data;
    Nodess next;

    Nodess(int data)
    {
        this.data=data;
    }

}

public class CircularLinkedList {

    public static void main(String[] args) {

        Nodess n1=new Nodess(10);
        Nodess n2=new Nodess(20);
        Nodess n3=new Nodess(30);

        Nodess head=n1;
        n1.next=n2;
        n2.next=n3;
        n3.next=n1;

        Traverse(head);


        //insert element in the start

        Nodess last=head;

        while(last.next!=head)
        {
            last=last.next;
        }

        Nodess n4=new Nodess(40);
        n4.next=head;
        head=n4;
        last.next=n4;

        Traverse(head);


        //Insert element in the last

        Nodess n5=new Nodess(200);
        Nodess lastt=head;

        while(lastt.next!=head)
        {
            lastt=lastt.next;
        }

        Nodess store= lastt.next;
        lastt.next=n5;
        n5.next=store;

        Traverse(head);


        //Insert element in the middle or any position same as before

        //Delete element from the start

        Nodess lasttt=head;

        while(lasttt.next!=head)
        {
            lasttt=lasttt.next;
        }
        Nodess tempVar=head;
        head=head.next;
        lasttt.next=head;

        Traverse(head);




        //Delete element from the last
        Nodess blasttt=head;
        while(blasttt.next.next!=head)
        {
            blasttt=blasttt.next;
        }
        blasttt.next=head;
        Traverse(head);





    }

    public static void Traverse(Nodess head)
    {
        Nodess cur=head;

        do{
            System.out.print(cur.data+" ");
            cur=cur.next;
        }
        while(cur!=head);

        System.out.println();
    }

}
