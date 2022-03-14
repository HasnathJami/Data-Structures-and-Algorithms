import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;

public class DFSRecursion {

    public static void dfsRecursion(boolean visited[],ArrayList<Integer> store, ArrayList<ArrayList<Integer>> adj,int source)
    {
         visited[source]=true;
         store.add(source);
        //System.out.print(source+" ");

          for(int i=0;i<adj.get(source).size();i++)
          {
              int neighbour=adj.get(source).get(i);
              if(visited[neighbour]==false)
              {
                  dfsRecursion(visited,store,adj,neighbour);
              }
          }


    }


    public static void dfsTraversal(ArrayList< ArrayList<Integer >  >adj, int V,int source)
    {
       ArrayList<Integer> store= new ArrayList<Integer>();
       boolean visited[] =new boolean[V+1];


       dfsRecursion(visited,store,adj,1);

        System.out.println(store);


    }

    public static void main(String[] args) {

        Scanner input=new Scanner(System.in);

        ArrayList < ArrayList<Integer>     > adj= new ArrayList<>();
        int n=input.nextInt();
        int e=input.nextInt();

        for(int i=0;i<=n;i++)
        {
            adj.add(new ArrayList<Integer>());
        }

        for(int i=0;i<e;i++)
        {
            int u=input.nextInt();
            int v=input.nextInt();
            adj.get(u).add(v);
            adj.get(v).add(u);


        }

        dfsTraversal(adj,n,1);
        System.out.println();


    }
}
