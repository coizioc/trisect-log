all: build

build/trisect: trisect.c
	gcc -O2 -o $@ $^ -lm

README.md: INPUT.md
	python -m readme2tex --nocdn --username coizioc --project trisect-log --output $@ $^

build: build/trisect README.md

readme: README.md