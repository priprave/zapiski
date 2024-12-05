# Ko dodajaš novo poglavje, ga dodaj na seznam sem
poglavja := vhod-in-izhod pogojni-stavki vhod-in-izhod-dopolnitev racunske-operacije spomin-in-kazalci urejanje zanke asimptoticna-notacija

# Pod to vrstico ničesar ne urejaj, če ne veš, kaj delaš!
# -------------------------------------------------------

latex-cmd := lualatex --shell-escape
poglavja-filenames := $(foreach poglavje,$(poglavja),poglavje-$(poglavje).pdf)

all: $(poglavja-filenames) ucbenik.pdf

zbt-templates: $(wildcard templates/*.tex)
	touch zbt-templates

$(poglavja-filenames): poglavje-%.pdf: poglavje-%.tex
	$(latex-cmd) $^

poglavje-%.tex: zbt-templates poglavja/%/*.tex poglavja/%/*.cpp
	echo "% Avtomatsko generirana datoteka. Varno za izbris." > $@
	cat templates/poglavje-1.tex > $@
	cat poglavja/$*/meta.tex >> $@
	cat templates/poglavje-2.tex >> $@
	cat poglavja/$*/all.tex >> $@
	cat templates/poglavje-3.tex >> $@

ucbenik.pdf: ucbenik.tex $(poglavja-filenames)
	$(latex-cmd) $^

.PHONY: clean
clean:
	rm -f *.log *.aux *.out *.gnuplot *.table *.toc
	rm -f poglavje-*.tex
	rm -f zbt-*
	rm -r _minted-*
