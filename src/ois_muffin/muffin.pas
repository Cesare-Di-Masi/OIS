{ constraints }
const
    MAXN = 1000000;

{ input data }
var
    N, K, i  : longint;
    V        : array[0..MAXN-1] of longint;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(N, K);
    for i:=0 to N-1 do
        read(V[i]);
    readln;

    { insert your code here }

    writeln(42); { change 42 with actual answer }
end.
