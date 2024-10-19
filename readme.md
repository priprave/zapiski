# Zapiski za OŠ priprave na programerska tekmovanja

## Prevajanje

Za generiranje PDF datoteke potrebuješ `lualatex`, nekatere od pogostejših LaTeX
paketov in [pygments](https://pygments.org/).
Če imaš vse pravilno nameščeno, prevedeš z
```
make
```
S tem se iz datotek za poglavja generirajo celotne LaTeX datoteke, ki jih sistem
tudi prevede v PDF.
Vmesne `.tex` niso potrebne za nadaljnjo delo, lahko jih odstraniš z
```
make clean
```
ampak vedi, da bo pri naslednjem prevajanju sistem morda prevedel celotno stvar
še enkrat.

## Pisanje zapiskov

Da ustvariš novo poglavje, dodaj imenik s kratkim imenom tvojega poglavja in
znaki `-` namesto presledkov v `poglavja/`.
Isto ime vpišeš v `Makefile`.
Ta imenik mora vsebovati dve datoteki, `meta.tex` in `all.tex`.

Datoteka `meta.tex` je kopirana v preamble samostojnega dokumenta, in v
vsebino skupnega učbenika.
Vsebovati mora klic makrota `\poglavje{Ime poglavja}`, ki sistemu pove naslov
trenutnega poglavja.
To je tudi primeren kraj za morebitne makrote, specifične na to poglavje.
Ker se jih ne da deklarirati lokalno, se morajo vsi začeti s kratkim imenom
poglavja v `camelCase` formatu.

Datoteka `all.tex` naj vsebuje vso vsebino poglavja, ali pa naj kliče
`\input{poglavja/kratko-ime-poglavja/01-prva-datoteka}`, da vključi besedilo
z druge `.tex` datoteke.

Ko meniš, da je poglavje pripravljeno, ga dodaj še v učbenik, tako da dodaš
primerno kodo v `ucbenik.tex`.
V trenutni konfiguraciji `make` LaTeX prevajalnik pokliče le enkrat za vsako
datoteko.
Če je kazalo pomanjkljivo, ali če želiš iz kakšnega drugega razloga stvar
prevesti še enkrat, lahko uporabiš
```
make -B poglavje-kratko-ime-poglavja.pdf
```
ali pa izpustiš ime datoteke, da znova prevedeš vse.

### Pripravljeni makroti

Namesto `\section` uporabljaj `\naslov`, namesto `\subsection` uporabljaj
`\podnaslov`, namesto `\subsubsection` dobro premisli, kako besedilo oblikuješ
drugače.

Za referenco na nalogo na putki uporabiš makro `\putka{id-naloge}{ime naloge}`,
ki bo avtomatsko ustvaril povezavo na nalogo.
Trenutno so naloge formatirane samo kot povezave, v prihodnosti pa se to lahko
spremeni.

### Vključevanje C++ kode

Za inline kodo uporabljaj `\koda{printf(...)}`, razen v primerih, kjer to ni
možno (npr. ker želiš napisati backslash).
V takih primerih uporabljaj `\verb+sem vnesi kodo+`; če ne moreš uporabiti znaka
`+`, pa uporabi enega drugega.
Sprejemljiva je tudi uporaba `\texttt`, sploh če ne pišeš kode, ampak le
nek plaintext.
Poleg tega moraš `\texttt` uporabljati za kodo v naslovih, ker `\koda` tam ne
deluje.
Za večje bloke kode imaš dve možnosti; bolje je, če kodo zapišeš v datoteko, in
pokličeš `\fkoda{poglavja/kratko-ime-poglavja/blabla.cpp}`, lahko pa kodo tudi
vneseš direktno v okolje `blokkode`.

Vhodne in izhodne podatke zapiši v `\texttt`, če so inline, oziroma v okolju
`verbatim`, če so večvrstični.
Tudi `\verb` je sprejemljiv, a poskrbi, da ne gre čez rob vrstice v končnem
dokumentu.

<!--  LocalWords:  generiranje PDF LaTeX preamble makrota makrote makroti moreš
<!--  LocalWords:  inline backslash večvrstični putki plaintext
 -->
