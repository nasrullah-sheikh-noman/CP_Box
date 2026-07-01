# CP Template

Personal Competitive Programming template written in C++.

## Features

* Fast I/O
* Common macros and aliases
* STL shortcuts
* Random number generator (`mt19937`)
* Frequently used constants
* Empty `solve()` function for quick problem setup

## Included Macros

* `ll` → `long long`
* `i8` → `__int128_t`
* `pb(x)` → `push_back(x)`
* `all(x)` → `x.begin(), x.end()`
* `rall(x)` → `x.rbegin(), x.rend()`
* `sz(x)` → `int(x.size())`
* `F`, `S` → `first`, `second`

## Included Aliases

* `vi` → `vector<int>`
* `vl` → `vector<long long>`
* `pii` → `pair<int, int>`
* `pll` → `pair<long long, long long>`

## Random Generator

```cpp
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int my_rand(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}
```

## Usage

Copy the template before contests or use it as the default starting file for problem solving.
