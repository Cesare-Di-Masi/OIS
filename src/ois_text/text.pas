{ NOTE: it is recommended to use this even if you don't understand the following code. }

{ constraints }
const
    MAXN = 100000;

{ input data }
var
    N, K, i : longint;
    W       : array[0..MAXN-1] of ansistring;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(N, K);
    for i:=0 to N-1 do
        readln(W[i]);

    { insert your code here }

    writeln(42); { print result }
end.
