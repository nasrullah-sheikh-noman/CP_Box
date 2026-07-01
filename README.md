# CP_Box

My personal Competitive Programming toolkit.

## Contents

### CP Template

Location:

```text
cp_template/cp_template.cpp
```

Contains:

* Fast I/O setup
* Common macros
* Random number generator (`mt19937`)
* Frequently used typedefs and utilities

### Stress Testing

Location:

```text
stress_testing/run.bat
```

Usage:

Place the following files in your working directory:

```text
gen.cpp
sol.cpp
brute.cpp
```

Then run:

```bash
run.bat
```

The script will:

1. Compile all files.
2. Generate random test cases.
3. Compare `sol` and `brute` outputs.
4. Stop and print the failing test case if a mismatch is found.

## Author

Nasrullah Sheikh Noman
