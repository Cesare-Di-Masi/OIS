{ constraints }
const
    MAXN = 200000;

{ input data }
var
    N, i  : longint;
    A, D  : array[0..MAXN-1] of longint;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(N);
    for i:=0 to N-1 do
        readln(A[i], D[i]);

    { insert your code here }

    writeln(42); { change 42 with actual answer }
end.
