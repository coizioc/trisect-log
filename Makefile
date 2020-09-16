all: build/trisect

build/trisect: trisect.c
	gcc -O2 -o $@ $^ -lm

README.md: INPUT.md
	python -m readme2tex --nocdn --username coizioc --project trisect-log --output $@ $^

build: README.md