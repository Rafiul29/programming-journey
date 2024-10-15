add_last(Element, [], [Element]).
add_last(Element, [H|T], [H|NewT]) :- add_last(Element, T, NewT).  