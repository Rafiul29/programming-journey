% Edge(Node, Neighbor) defines the edges of the graph
edge(a, b).
edge(a, c).
edge(b, d).
edge(b, e).
edge(c, f).
edge(d, g).
edge(e, h).
edge(f, i).
edge(g, j).
edge(h, k).

% dfs(Start, Goal, Path) - Find a path from Start to Goal using DFS
dfs(Start, Goal, Path) :-
    dfs_helper(Start, Goal, [Start], Path).

dfs_helper(Goal, Goal, Visited, Path) :-
    reverse(Visited, Path).

dfs_helper(CurrentNode, Goal, Visited, Path) :-
    edge(CurrentNode, NextNode),
    \+ member(NextNode, Visited),
    dfs_helper(NextNode, Goal, [NextNode|Visited], Path).