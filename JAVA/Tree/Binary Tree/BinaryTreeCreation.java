import java.sql.SQLOutput;
import java.util.Scanner;

class Node{

    Node left,right;
    int data;

    Node(int data)
    {
        this.data=data;
    }

}


public class BinaryTreeCreation {

    static Scanner inp=new Scanner(System.in);

    public static Node CreateTree()
    {
        Node root=null;

        System.out.println("Please Input the data:");
        int data=inp.nextInt();

        if(data==-1) return null;
        root=new Node(data);

        System.out.println("Enter left for "+data+":");
        root.left=CreateTree();

        System.out.println("Enter right for "+data+":");
        root.right=CreateTree();

        return root;
    }



    public static void main(String[] args) {

        CreateTree();


    }

}
