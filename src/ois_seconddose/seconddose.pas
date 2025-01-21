{ NOTE: it is recommended to use this even if you don't understand the following code. }

{ constraints }
const
    MAXN = 100000;

{ input data }
var
    N1, N2, i  : longint;
    ID1, ID2   : array[0..MAXN-1] of longint;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(N1, N2);
    for i:=0 to N1-1 do
        read(ID1[i]);
    readln();
    for i:=0 to N2-1 do
        read(ID2[i]);
    readln();

    { insert your code here }

    writeln(42); { print result }
end.
