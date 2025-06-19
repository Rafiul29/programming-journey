father(shohidul,satcho).
father(jamal,shohidul).
father(rahman,jamal).
father(someone,rahman).


grandfather(X,Y):- father(X,shohidul),father(shohidul,Y).
