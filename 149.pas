var i, n, b : integer;
    a : array [1..1000] of integer;
begin
    readln(n);
    for i:=1 to n do  read(a[i]);
    for i:=n downto 1 do write(a[i],' ');
end.
