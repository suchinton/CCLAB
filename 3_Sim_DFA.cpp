/*
    Compute the FIRST & FOLLOW for every Vn ('<' = epsilon)

    S -> ACB| CbB| Ba
    A -> da|BC
    B -> g|<
    C -> h|<

    FIRST(S) = {a,b,d,g,h,<}
    FIRST(A) = {d,g,<}
    FIRST(B) = {g,<}
    FIRST(C) = {h,<}

    FOLLOW(S) = {$}
    FOLLOW(A) = {h,g,$}
    FOLLOW(B) = {a,h,g,$} 
    FOLLOW(C) = {b,g,h,$}
*/