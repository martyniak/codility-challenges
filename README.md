# C/C++

## Google Test setup

1. Download google test https://github.com/google/googletest/releases

2. Unzip it

3. Build it

        cd googletest        # Main directory of the cloned repository.
        mkdir build          # Create a directory to hold the build output.
        cd build
        cmake ..
        make

4. Copy `include` content to `.lib/gtest`

5. Copy `libgtest.a` to `.lib`

# Python

## Environment setup

1. Create virtual environment

        virtualenv .venv

2. Activate virtual env

        source .venv/Scripts/activate

3. Install packages

        pip install -i requirements.txt