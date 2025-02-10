{ NOTE: it is recommended to use this even if you don't understand the following code }

const
    MAXN = 10000;

var
    D, N, i : LongInt;
    A, B    : Array[0..MAXN-1] of LongInt;
    K       : AnsiString;

begin
{
    uncomment the two following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    ReadLn(N);

    ReadLn(D);

    for i:=0 to N-1 do
        Read(A[i]);
    ReadLn();

    for i:=0 to N-1 do
        Read(B[i]);
    ReadLn();

    K := '';

    { INSERT YOUR CODE HERE }


    WriteLn(K);

end.
