// NOTE: it is recommended to use this even if you don't understand the following code.

import java.util.*;
import java.io.*;
import java.lang.*;

public class valentinesday {

    public static void main(String[] args) throws FileNotFoundException, IOException {
        Locale.setDefault(Locale.US);
        InputStream fin = System.in;
        OutputStream fout = System.out;
        // uncomment the two following lines if you want to read/write from files
        // fin = new FileInputStream("input.txt");
        // fout = new FileOutputStream("output.txt");

        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(fout));
        reader = new BufferedReader(new InputStreamReader(fin));
        scn = new StringTokenizer(reader.readLine());

        int N = Integer.parseInt(next());
        int M = Integer.parseInt(next());

        int[] C = new int[N];
        for (int i = 0; i < N; ++i)
            C[i] = Integer.parseInt(next());

        int[] P = new int[N];
        for (int i = 0; i < N; ++i)
            P[i] = Integer.parseInt(next());

        int maxChocolates = 0;


        // INSERT YOUR CODE HERE


        writer.write(String.valueOf(maxChocolates));
        writer.write('\n');

        writer.flush();
    }

    static String next() throws IOException {
        while (!scn.hasMoreTokens()) scn = new StringTokenizer(reader.readLine());
        return scn.nextToken();
    }

    static BufferedReader reader;
    static StringTokenizer scn;
}
