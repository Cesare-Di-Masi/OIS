// NOTE: it is recommended to use this even if you don't understand the following code.

import java.util.*;
import java.io.*;
import java.lang.*;

public class matred {

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

        int[][] A = new int[N + 1][M + 1];
        for (int j = 1; j <= N; ++j) {
            for (int i = 1; i <= M; ++i)
                A[j][i] = Integer.parseInt(next());
        }

        int R = 0;
        int[] x1 = new int[2*N*M], y1 = new int[2*N*M], x2 = new int[2*N*M], y2 = new int[2*N*M], V = new int[2*N*M];


        // INSERT YOUR CODE HERE


        writer.write("YES");
        writer.write('\n');
        writer.write(String.valueOf(R));
        writer.write('\n');
        for (int i = 0; i < R; ++i) {
            writer.write(String.valueOf(x1[i]));
            writer.write(' ');
            writer.write(String.valueOf(y1[i]));
            writer.write(' ');
            writer.write(String.valueOf(x2[i]));
            writer.write(' ');
            writer.write(String.valueOf(y2[i]));
            writer.write(' ');
            writer.write(String.valueOf(V[i]));
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
