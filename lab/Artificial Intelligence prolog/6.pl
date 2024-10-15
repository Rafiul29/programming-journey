last_item([X], X).
last_item([_|T], X) :- last_item(T, X).
