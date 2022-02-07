import java.util.HashSet;

public class HashSetCollections {

    public static void main(String[] args) {

        HashSet<Integer> hs = new HashSet<Integer>();

        hs.add(10);
        hs.add(20);
        hs.add(30);
        hs.add(40);
        hs.add(40);

        //hs.remove(20);
        System.out.println(hs.size());

        System.out.println(hs);

        for(int i:hs)
        {
            System.out.print(i+" ");
        }
        System.out.println();

        if(hs.contains(10)==true)
        {
            System.out.println("Found");
        }
        else{
            System.out.println("Not found");
        }
    }
}
