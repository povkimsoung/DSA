## NOTE


**Data Structure** {
-> is a way of storing and organising data in a computer so that it can be accessed 
and updated effiecienly.
*Common examples: Array - Linked List - Stack - Queue - Tree - Graph - Hash Table.

*Data Structure have 2 type:{
    +Linear: Element in a sequence, one after another.
    -> Accessed sequentially / by index
    -> Examples: Array, Linked List, Stack Queue.
    +Non-linear: Elements connected in many directions (hierachy / network).
    -> Examples: Tree, Graph.
}

**CHOOSE THE RIGHT STRUCTURE**:{
    +Need - Good choise:
    _Fast access by position -> Array
    _Frequent insert/remove ar ends -> Linked List / Deque
    _Undo / last-in-first-out -> Stack
    _Process in arrival other -> Queue
    _Represent hierarchy -> Tree
    _Represent connections -> Graph
    _Fast lookup by key -> Hash Table
}

}

**Algorithm** {
-> is a finite, ordered set of clear steps that takes an input and produces the corrrest output.

**The greatness algorithm**{
    +Correctness: {
        -> Always produces the right output for every valid input.
        -> A fast wrong answer is still wrong.
    }
    +Effciency: {
        -> Uses as little time and memory as possible.
        -> Matters most as the input grows large.
    }
}

**What is Asymptotic analysis?** {
    -> Asymptotic analysis describles an algorithm's efficiency by how it's time or space grows as the input size n becomes very large.

**Big-O , Omega & Theta**{
    Big-O : Worst case -> Upper bound -- cost will not exceed this.
    Omega : Best case -> Lower bound -- cost is at least this.
    Theta : Tight bound -> Upper and lower bound match -- the typical case.
}

**Common complexity classes**{
    Notation -- Name -- Example: 
    O(1) -> Constant -> Array index access
    O(log n) -> Logarithm -> Binary search
    O(n) -> linear -> Loop through a list
    O(n log n) -> Linearithm -> Merge sort
    O(n2) -> Quadratic -> Nested loops
    O(2n) -> exponential -> Brute-force subsets
}


****}

}

