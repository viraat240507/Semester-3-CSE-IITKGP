SUBDIRS = src

.PHONY: all clean run $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

run: all
	./build/app

clean: 
	@for dir in $(SUBDIRS); do \ 
		$(MAKE) -C $$dir clean; \
	done
	rm -rf build
