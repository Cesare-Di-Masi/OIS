// NOTE: it is recommended to use this even if you don't understand the following code.

using System;
using System.IO;
using System.Linq;
using System.Collections.Generic;

namespace matred {

    class Program {
        static void Main(String[] args) {
            StreamReader streamReader = new StreamReader(Console.OpenStandardInput());
            StreamWriter streamWriter = new StreamWriter(Console.OpenStandardOutput());
            // uncomment the two following lines if you want to read/write from files
            // streamReader = new StreamReader("input.txt");
            // streamWriter = new StreamWriter("output.txt");

            IEnumerator<String> it = GetEnumerator(streamReader);

            int N = Convert.ToInt32(Next(it));
            int M = Convert.ToInt32(Next(it));

            int[,] A = new int[N + 1, M + 1];
            for (int j = 1; j <= N; ++j) {
                for (int i = 1; i <= M; ++i)
                    A[j, i] = Convert.ToInt32(Next(it));
            }

            int R = 0;
            int[] x1 = new int[2*N*M], y1 = new int[2*N*M], x2 = new int[2*N*M], y2 = new int[2*N*M], V = new int[2*N*M];


            // INSERT YOUR CODE HERE


            streamWriter.WriteLine("YES");
            streamWriter.WriteLine($"{R}");
            for (int i = 0; i < R; ++i)
                streamWriter.WriteLine($"{x1[i]} {y1[i]} {x2[i]} {y2[i]} {V[i]}");

            streamReader.Close();
            streamWriter.Close();
        }

        static IEnumerator<String> GetEnumerator(StreamReader sr) {
            String line;
            while ((line = sr.ReadLine()) != null) {
                String[] tokens = line.Split(' ').Where(t => t.Length > 0).ToArray();
                foreach (String t in tokens) {
                    yield return t;
                }
            }
        }

        static String Next(IEnumerator<String> iterator) {
            return iterator.MoveNext() ? iterator.Current : null;
        }
    }
}
