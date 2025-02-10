{ NOTE: it is recommended to use this even if you don't understand the following code }

const
    MAXN = 100000;

var
    M, N, i, maxChocolates : LongInt;
    C, P                   : Array[0..MAXN-1] of LongInt;

begin
{
    uncomment the two following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    ReadLn(N, M);

    for i:=0 to N-1 do
        Read(C[i]);
    ReadLn();

    for i:=0 to N-1 do
        Read(P[i]);
    ReadLn();

    maxChocolates := 0;

    { INSERT YOUR CODE HERE }


    WriteLn(maxChocolates);

end.
