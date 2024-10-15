sells(mila,egg).
sells(joni,apple).
sells(jhon,bread).
sells(alamgir,bread).
buys(niloy,egg).
buys(tony,bread).

mila_sells(X):- buys(niloy,X).
tony_buys(X):- sells(X,bread).