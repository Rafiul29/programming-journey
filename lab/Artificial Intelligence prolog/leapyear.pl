leap_year(Year) :-
        Year<0 ->
        (write(Year), write(' your number negative'), nl)
        ;
        (Year mod 4 =:= 0, 
        (Year mod 100 =\= 0 ; Year mod 400 =:= 0)) ->
        (write(Year), write(' is a leap year.'), nl)
        ;
        (write(Year), write(' is not a leap year.'), nl).
