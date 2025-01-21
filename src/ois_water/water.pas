function empty(N: longint): longint;
begin
    (* insert your code here *)
    empty := 42;
end;


var
    N     : longint;
    fr, fw: text;

begin
    assign(fr, 'input.txt');
    assign(fw, 'output.txt');
    reset(fr);
    rewrite(fw);
    readln(fr, N);
    writeln(fw, empty(N));
    close(fr);
    close(fw);
end.
