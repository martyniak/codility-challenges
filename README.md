# C/C++

## Environment setup

### Windows

1. Install `cygwin64`

### Linux

1. Install `gcc` and `g++`

## Google Test setup

1. Download google test https://github.com/google/googletest/releases

1. Unzip it

1. Build it

        cd googletest        # Main directory of the cloned repository.
        mkdir build          # Create a directory to hold the build output.
        cd build
        cmake ..
        make

1. Copy `include` content to `.lib/gtest`

1. Copy `libgtest.a` to `.lib`

## Compile the files

1. Open google test file and press `F5` in VSCode (it will trigger `lunch.json` located at `.vscode` dir)

## Running the tests
    ./a.exe

# Python

## Environment setup

1. Install Python 3

1. Install `virtualenv`

        pip install virtualenv

1. Create virtual environment

        virtualenv .venv

1. Activate virtual env

        source .venv/Scripts/activate

1. Install packages

        pip install -i requirements.txt

## Running the tests
    pytest
