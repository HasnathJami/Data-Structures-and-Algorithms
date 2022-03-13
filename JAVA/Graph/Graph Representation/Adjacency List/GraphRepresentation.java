import java.util.ArrayList;
import java.util.Scanner;

public class GraphRepresentation {

    public static void addEdge(ArrayList< ArrayList<Integer>    > adj ,int source, int destination)
    {
          adj.get(source).add(destination);
          adj.get(destination).add(source);
          //al.get(source).
    }
    public static void main(String[] args) {

        Scanner inp=new Scanner(System.in);
        ArrayList<ArrayList<Integer> >adj= new ArrayList<  ArrayList<Integer>  >();
        int n=5; //nodes or vertices
        int e=6;

        for(int i=0;i<=n;i++)
        {
            adj.add(i, new ArrayList<Integer>() );
        }

        //System.out.println(adj);

        for(int i=0;i<e;i++)
        {
            int u=inp.nextInt();
            int v=inp.nextInt();

            addEdge(adj,u,v);


        }
        System.out.println(adj);






    }
}
