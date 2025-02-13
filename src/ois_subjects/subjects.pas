{ NOTE: it is recommended to use this even if you don't understand the following code }

const
    MAXP = 1000000;
    MAXN = 100000;

var
    M, N, P, i, j : LongInt;
    K             : Array[0..MAXN-1] of LongInt;
    S             : Array[0..MAXN-1] of Array[0..5] of LongInt;
    ans           : Array[0..MAXP-1] of Array[0..1] of LongInt;

begin
{
    uncomment the two following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    ReadLn(N, M);

    for j := 0 to N - 1 do 
    begin        
        Read(K[j]);
        for i := 0 to K[j] - 1 do
            Read(S[j][i]);
    end;


    P := 0;
    for i := 0 to 2 - 1 do
        for j := 0 to MAXP - 1 do
            ans[j][i] := 0;

    { INSERT YOUR CODE HERE }

    WriteLn(P);
    for j := 0 to P - 1 do 
    begin
        for i := 0 to 2 - 1 do
            Write(ans[j][i], ' ');
        WriteLn();
    end;

end.
