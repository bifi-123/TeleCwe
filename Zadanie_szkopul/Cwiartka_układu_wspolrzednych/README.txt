Wstęp do programowania, lekcja 3. Dostępna pamięć: 256 MB. 
Napisz program, który dla danego punktu na płaszczyźnie sprawdzi, w której ćwiartce układu współrzędnych
się on znajduje. Może jednak być tak, że punkt nie znajduje się w żadnej ćwiartce – leży na jednej z osi lub
w środku układu współrzędnych. Wówczas program powinien to stwierdzić.

Wejście:
Na wejściu znajdują się dwie liczby całkowite oddzielone spacją, x i y (−1 000 000 000 ≤ x, y ≤ 1 000 000 000),
oznaczające współrzędne danego punktu.

Wyjście:
Jeżeli podany punkt nie leży na żadnej z osi, Twój program powinien wypisać: I, II, III lub IV, w przypadku
gdy punkt należy do, odpowiednio, pierwszej, drugiej, trzeciej lub czwartej ćwiartki układu współrzędnych.
Jeżeli punkt leży w środku układu współrzędnych, program powinien wypisać liczbę 0. W przeciwnym razie,
program powinien wypisać OX (duże O i duże X), jeśli punkt leży na osi X, a OY – jeśli punkt leży na osi Y.

Przykład:
Dla danych wejściowych:
5 7
poprawnym wynikiem jest:
I
a dla danych wejściowych:
0 -1000000000
poprawnym wynikiem jest:
OY
natomiast dla danych wejściowych:
0 0
poprawnym wynikiem jest:
0
