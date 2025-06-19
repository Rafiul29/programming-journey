reverse_list([],[]). 
reverse_list([H|T], ReversedList) :-
    reverse_list(T, ReversedTail), 
    append(ReversedTail, [H], ReversedList). 