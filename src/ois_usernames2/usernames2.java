// NOTE: it is recommended to use this even if you don't understand the following code.

import java.util.*;
import java.io.*;
import java.lang.*;

public class usernames2 {

    public static void main(String[] args) throws FileNotFoundException, IOException {
        Locale.setDefault(Locale.US);
        InputStream fin = System.in;
        OutputStream fout = System.out;
        // uncomment the two following lines if you want to read/write from files
        // fin = new FileInputStream("input.txt");
        // fout = new FileOutputStream("output.txt");

        InputReader scn = new InputReader(fin);
        PrintStream prnt = new PrintStream(fout);

        String S = scn.readString();
        
        int N = scn.readInt();
        
        String[] U = new String[N];
        for (int i = 0; i < N; ++i)
            U[i] = scn.readString();
        
        String T = "";
        
        
        // INSERT YOUR CODE HERE
        
        
        prnt.format("%s\n", T);

        fout.flush();
    }
}

class InputReader implements java.io.Closeable {
    private java.io.InputStream stream;
    private byte[] buf = new byte[1024];
    private int curChar;
    private int numChars;

    public InputReader(java.io.InputStream stream) {
        this.stream = stream;
    }

    @Override
    public void close() {
        try {
            this.stream.close();
        } catch (java.io.IOException e) {
        }
    }

    public int read() {
        if (numChars == -1) {
            throw new java.util.InputMismatchException();
        }
        if (curChar >= numChars) {
            curChar = 0;
            try {
                numChars = stream.read(buf);
            } catch (java.io.IOException e) {
                throw new java.util.InputMismatchException();
            }
            if (numChars <= 0) {
                return -1;
            }
        }
        return buf[curChar++];
    }

    public int readInt() {
        int c = eatWhite();
        int sgn = 1;
        if (c == '-') {
            sgn = -1;
            c = read();
        }
        int res = 0;
        do {
            if (c < '0' || c > '9') {
                throw new java.util.InputMismatchException();
            }
            res *= 10;
            res += c - '0';
            c = read();
        } while (!isSpaceChar(c));
        return res * sgn;
    }

    public long readLong() {
        int c = eatWhite();
        long sgn = 1;
        if (c == '-') {
            sgn = -1;
            c = read();
        }
        long res = 0;
        do {
            if (c < '0' || c > '9') {
                throw new java.util.InputMismatchException();
            }
            res *= 10;
            res += c - '0';
            c = read();
        } while (!isSpaceChar(c));
        return res * sgn;
    }

    public char readChar() {
        return (char)eatWhite();
    }

    public String readString() {
        int c = eatWhite();
        StringBuilder res = new StringBuilder();
        do {
            if (Character.isValidCodePoint(c))
                res.appendCodePoint(c);
            c = read();
        } while (!isSpaceChar(c));
        return res.toString();
    }

    public String readLine() {
        StringBuilder res = new StringBuilder();
        while (true) {
            int c = read();
            if (c == '\n' || c == '\r' || c == -1)
                break;
            if (Character.isValidCodePoint(c))
                res.appendCodePoint(c);
        }
        return res.toString();
    }

    public int eatWhite() {
        int c = read();
        while (isSpaceChar(c)) {
            c = read();
        }
        return c;
    }

    public static boolean isSpaceChar(int c) {
        return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
    }
}
