{ WARNING: this is a generic template, not specific to any task }

{ constraints }
const
    MAXN = 100;

{ input data }
var
    N, i  : longint;
    H, V     : array[0..MAXN-1] of longint;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    { read number N in a single line }
    readln(N);
    { read all numbers H[i] in the next line }
    for i:=0 to N-1 do
        read(H[i]);
    readln();
    { read all numbers V[i] in the next line }
    for i:=0 to N-1 do
        read(V[i]);
    readln();

    { insert your code here }

    { write numbers 42 and 12 in a single line }
    writeln(42, 12);
end.
