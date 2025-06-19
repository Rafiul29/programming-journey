% edge(Node, Neighbor) defines the edges of the graph
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

% bfs(Start, Goal, Path) - Find a path from Start to Goal using BFS
bfs(Start, Goal, Path) :-
    bfs_helper([[Start]], Goal, Path).

bfs_helper([[Goal|Rest]|_], Goal, Path) :- 
    reverse([Goal|Rest], Path).  % Found the goal, return the path.

bfs_helper([CurrentPath|Paths], Goal, FinalPath) :-
    CurrentPath = [CurrentNode|_],
    findall([NextNode|CurrentPath],
            (edge(CurrentNode, NextNode), \+ member(NextNode, CurrentPath)),
            NewPaths),
    append(Paths, NewPaths, UpdatedPaths),
    bfs_helper(UpdatedPaths, Goal, FinalPath).