#!/usr/bin/make -f

.PHONY: all clean distclean doc doc-dev

DOC = Documentation.html
DOCDEV = xml_states.ps cli_tokenize.ps

all: doc doc-dev
xml_states.ps: ../src/xml.dot
libcli/cli_tokenize.ps: ../src/libcli/cli_tokenize.dot

doc: $(DOC)
doc-dev: $(DOCDEV)

clean:
	$(RM) $(DOC)

distclean: clean
	$(RM) $(DOCDEV)

%.ps:
	dot -Tps $^ > $@

%.html:
	../src/hnb -rc /dev/null $(basename $@).hnb -e "go root" "export_htmlcss $@"

%.txt:
	../src/hnb -rc /dev/null $(basename $@).hnb -e "go root" "export_ascii $@"
