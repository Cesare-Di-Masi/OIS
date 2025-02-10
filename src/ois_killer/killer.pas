{ NOTE: it is recommended to use this even if you don't understand the following code }

var
    K, N, T, test : LongInt;
    ans           : AnsiString;

begin
{
    uncomment the two following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    ReadLn(T);
    for test:=1 to T do begin
        ReadLn(N, K);

        ans := '';

        { INSERT YOUR CODE HERE }


        WriteLn(ans);
    end;

end.
