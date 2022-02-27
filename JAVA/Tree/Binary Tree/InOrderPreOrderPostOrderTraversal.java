import java.util.Scanner;

class Node2{
    Node2 left,right;
    int data;

    Node2(int data)
    {
        this.data=data;
    }

}

public class InOrderPreOrderPostOrderTraversal {

    static Scanner inp=new Scanner(System.in);


    private static Node2 CreateTree()
    {
        Node2 root=null;

        System.out.println("Input data:");
        int data=inp.nextInt();

        if(data==-1) return null;

        root=new Node2(data);

        System.out.println("Enter left for:"+data+":");
        root.left=CreateTree();
        System.out.println("Enter right for:"+data+":");
        root.right=CreateTree();


        return root;

    }

    public static void main(String[] args) {
        Node2 root=CreateTree();
        InOrder(root);
        System.out.println();
        PreOrder(root);
        System.out.println();
        PostOrder(root);
        System.out.println();
    }

    private static void InOrder(Node2 root)
    {
        if(root==null) return;
        InOrder(root.left);
        System.out.print(root.data+" ");
        InOrder(root.right);
    }

    private static void PreOrder(Node2 root)
    {
        if(root==null) return;
        System.out.print(root.data+" ");
        PreOrder(root.left);
        PreOrder(root.right);
    }

    private static void PostOrder(Node2 root)
    {
        if(root==null) return;
        PostOrder(root.left);
        PostOrder(root.right);
        System.out.print(root.data+" ");
    }



}
