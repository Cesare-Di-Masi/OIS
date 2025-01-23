{ NOTE: it is recommended to use this even if you don't understand the following code. }

{ constraints }
const
    MAXN = 5000;

{ input data }
var
    N, X, i : longint;
    P, Q    : array[0..MAXN-1] of longint;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(N, X);
    for i:=0 to N-1 do
        readln(P[i], Q[i]);

    { insert your code here }

    writeln(42); { print result }
end.
