/*
    Compute the FIRST & FOLLOW for every Vn ('<' = epsilon)

    S -> ABA
    A -> Bc|dA|<
    B -> eA

    FIRST(S) = {d,e,<}
    FIRST(A) = {d,e,<}
    FIRST(B) = {e}

    FOLLOW(S) = {$}
    FOLLOW(A) = {c,d,e,$}
    FOLLOW(B) = {c,d,e,$}
*/