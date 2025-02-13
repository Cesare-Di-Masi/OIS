// NOTE: it is recommended to use this even if you don't understand the following code.

import java.util.*;
import java.io.*;
import java.lang.*;

public class subjects {

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
        
        int[] K = new int[N];
        int[][] S = new int[N][5];
        for (int j = 0; j < N; ++j) {
            K[j] = Integer.parseInt(next());
            for (int i = 0; i < K[j]; ++i)
                S[j][i] = Integer.parseInt(next());
        }

        int P = 0;
        int[][] ans = new int[1000000][2];


        // INSERT YOUR CODE HERE


        writer.write(String.valueOf(P));
        writer.write('\n');
        for (int j = 0; j < P; ++j) {
            for (int i = 0; i < 2; ++i) {
                writer.write(String.valueOf(ans[j][i]));
                writer.write(' ');
            }
            writer.write('\n');
        }

        writer.flush();
    }

    static String next() throws IOException {
        while (!scn.hasMoreTokens()) scn = new StringTokenizer(reader.readLine());
        return scn.nextToken();
    }

    static BufferedReader reader;
    static StringTokenizer scn;
}
