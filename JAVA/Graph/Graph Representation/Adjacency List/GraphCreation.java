import java.util.ArrayList;
import java.util.Scanner;

public class GraphCreation {

    public static Scanner input=new Scanner(System.in);

    public static void main(String[] args) {

        int n=input.nextInt();
        int e=input.nextInt();


        ArrayList<ArrayList<Integer> > adj=new ArrayList<>();

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

        System.out.println(adj);

    }




}
