{ NOTE: it is recommended to use this even if you don't understand the following code. }

{ input data }
var
    A    : array[0..3] of longint = (0, 0, 0, 0);
    B    : array[0..3] of longint = (0, 0, 0, 0);
    line : string;
    i, j : longint;
    answer : int64;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(line);
    j := 0;
    for i := 1 to length(line) do
        if line[i] = '.' then
            inc(j)
        else
            A[j] := A[j] * 10 + ord(line[i]) - ord('0');


    readln(line);
    j := 0;
    for i := 1 to length(line) do
        if line[i] = '.' then
            inc(j)
        else
            B[j] := B[j] * 10 + ord(line[i]) - ord('0');
    
    { at this point, the arrays A and B contain four elements each with the individual IP octects }
    { for example: 192.168.1.1 creates an array (192, 168, 1, 1) with 192 at index 0 }

    { insert your code here }
    answer := 42;

    writeln(answer); { print result }
end.
