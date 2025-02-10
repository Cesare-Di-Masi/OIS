{ NOTE: it is recommended to use this even if you don't understand the following code }

const
    MAXR = 500000;
    MAXM = 500;
    MAXN = 500;

var
    M, N, R, i, j     : LongInt;
    A                 : Array[1..MAXM] of Array[1..MAXN] of LongInt;
    V, x1, x2, y1, y2 : Array[0..MAXR-1] of LongInt;

begin
{
    uncomment the two following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    ReadLn(N, M);

    for j:=1 to N do begin
        for i:=1 to M do
            Read(A[j][i]);
        ReadLn();
    end;

    R := 0;

    { INSERT YOUR CODE HERE }


    WriteLn('YES');
    WriteLn(R);
    for i:=0 to R-1 do
        WriteLn(x1[i], ' ', y1[i], ' ', x2[i], ' ', y2[i], ' ', V[i]);

end.
