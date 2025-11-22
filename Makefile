# Makefile for making tests

# ===Variables===
COMPILER = gcc
PROGRAM_NAME = coalloc_test
INPUT_FILE = src\test.c src\coalloc.c
OUTPUT_FILE = bin\$(PROGRAM_NAME).exe

# ===Targets===
all:
	@echo ===Building Info===
	@echo Compiler: $(COMPILER)
	@echo Program name: $(PROGRAM_NAME)
	@echo Input files: $(INPUT_FILE)
	@echo Output files: $(OUTPUT_FILE)
	@echo ===================

	@echo Starting build process...
	$(COMPILER) $(INPUT_FILE) -Isrc\inc -o $(OUTPUT_FILE)
	@echo [BUILD_INFO] $(PROGRAM_NAME) builded succesfully.
clean:
	rmdir bin /s /q
	mkdir bin