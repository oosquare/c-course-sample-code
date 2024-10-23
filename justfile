BUILD_DIR := "build"
PLAYGROUND_DIR := "playground"
TARGET := "c-course"

default: build

build:
    @mkdir -p {{ BUILD_DIR }}
    @cd {{ BUILD_DIR }} && cmake .. && make

run: build
    @./{{ BUILD_DIR }}/{{ TARGET }}

run-file: build
    @./{{ BUILD_DIR }}/{{ TARGET }} < ./{{ PLAYGROUND_DIR }}/input.txt

run-diff: build
    @./{{ BUILD_DIR }}/{{ TARGET }} < ./{{ PLAYGROUND_DIR }}/input.txt > ./{{ PLAYGROUND_DIR }}/output.txt
    @diff ./{{ PLAYGROUND_DIR }}/output.txt ./{{ PLAYGROUND_DIR }}/answer.txt

clean:
    @rm -rf {{ BUILD_DIR }}
