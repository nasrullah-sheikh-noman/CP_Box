@echo off

g++ gen.cpp -O2 -o gen
g++ sol.cpp -O2 -o sol
g++ brute.cpp -O2 -o brute

:loop
gen > in
sol < in > out
brute < in > ok

fc out ok
if errorlevel 1 (
    echo Mismatch Found!
    type in
    exit /b
)

echo ok
goto loop
