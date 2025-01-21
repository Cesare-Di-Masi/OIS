{ NOTE: it is recommended to use this even if you don't understand the following code }

const
    MAXN = 100000;

var
    S, T : AnsiString;
    N, i : LongInt;
    U    : Array[0..MAXN-1] of AnsiString;

begin
{
    uncomment the two following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    ReadLn(S);
    
    ReadLn(N);
    
    for i:=0 to N-1 do
        ReadLn(U[i]);
    
    T := '';
    
    { INSERT YOUR CODE HERE }
    
    
    WriteLn(T);

end.
