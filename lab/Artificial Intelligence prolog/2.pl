% Base case:
concatenate([], L, L). % If the first list is empty, the concatenated list is just the second list.

% Recursive case:
concatenate([H|T], L, [H|R]) :-
concatenate(T, L, R). % Concatenate the tail of the first list with the second list.
