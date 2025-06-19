%merge(L1, L2, Merged) :-
   % append(L1, L2, Combined),  % Combine both lists
   % sort(Combined, Merged).    % Sort the %combined list

% Base cases:
merge([], L, L). 
merge(L, [], L).

% Recursive case:
merge([H1|T1], [H2|T2], [H1|T]) :- 
    H1 =< H2,
    merge(T1, [H2|T2], T). 

merge([H1|T1], [H2|T2], [H2|T]) :- 
    H1 > H2,
    merge([H1|T1], T2, T). 


