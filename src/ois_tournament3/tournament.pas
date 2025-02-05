{ NOTE: it is recommended to use this even if you don't understand the following code }

const
    MAXN = 131072;

var
    N, i, runnerup, winner : LongInt;
    P                      : Array[0..MAXN-1] of LongInt;

begin
{
    uncomment the two following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    ReadLn(N);

    for i:=0 to N-1 do
        Read(P[i]);
    ReadLn();

    winner := 0;
    runnerup := 0;

    { INSERT YOUR CODE HERE }


    WriteLn(winner, ' ', runnerup);

end.
